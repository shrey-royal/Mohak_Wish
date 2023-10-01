/*
Problem Statement: Music Library Organizer

You are tasked with developing a Music Library Organizer program to manage a collection of music tracks and albums. The system should consist of classes for tracks, artists, and genres, allowing the user to efficiently add, remove, and search for music entries in the library.

Requirements:

1. Create a class 'Artist' with private member variables for the artist's name, birthdate, and nationality. Implement getter and setter methods for these attributes.

2. Create a class 'Genre' with private member variables for the genre name and a description. Implement getter and setter methods for these attributes.

3. Create a class 'Track' with private member variables for the track's title, duration, release year, an instance of an 'Artist', and an instance of a 'Genre'. Implement getter and setter methods for these attributes.

4. Implement a class 'MusicLibrary' that manages a collection of music tracks. It should include the following functionalities:
   - Add a new track to the library.
   - Remove a track from the library by title or artist.
   - Search for tracks by title, artist, genre, or release year and display the matching tracks.
   - Display the entire music library.

5. Ensure that track titles are unique within the library.

6. Implement proper validation checks when adding or removing tracks. For example, check for duplicate track titles when adding a new track and ensure that the track exists in the library before attempting to remove it.

7. Provide a user-friendly command-line interface (CLI) to interact with the Music Library Organizer, allowing users to perform actions like adding, removing, searching for tracks, and displaying the library.

8. Handle edge cases gracefully, such as when searching for a track that does not exist in the library.

9. Implement error handling to prevent crashes and provide informative error messages to users in case of incorrect input or other issues.

Remember to use proper object-oriented programming principles, encapsulation, and error handling in your C++ program.

*/

#include<iostream>
#include<string>
using namespace std;

class Artist {
private:
    string name;
    string birthdate;
    string nationality;
public:

    Artist() {}

    Artist(string name, string birthdate, string nationality) 
    : name(name), birthdate(birthdate), nationality(nationality) { }

    //Get Set
    string getName() { return name; }
    void setName(string name) { this->name = name; }

    string getBirthdate() { return birthdate; }
    void setBirthdate(string birthdate) { this->birthdate = birthdate; }

    string getNationality() { return nationality; }
    void setNationality() { this->nationality = nationality; }
};

class Genre {
private:
    string name;
    string desc;
public:
    Genre() { }

    Genre(string name, string desc) : name(name), desc(desc) { }

    //Get Set

    string getName() { return name; }
    void setName(string name) { this->name = name; }

    string getDesc() { return desc; }
    void setDesc(string desc) { this->desc = desc; }
};

class Track {
private:
    string title;
    int duration;
    int releaseYear;
    Artist artist;
    Genre genre;

public:

    Track() {}

    Track(string title, int duration, int releaseYear, Artist artist, Genre genre) 
    : title(title), duration(duration), releaseYear(releaseYear), artist(artist), genre(genre) { }

    //Get Set
    string getTitle() { return title; }
    void setTitle(string title) { this->title = title; }

    int getDuration() { return duration; }
    void setDuration(int duration) { this->duration = duration; }

    int getReleaseYear() { return releaseYear; }
    void setReleaseYear(int releaseYear) { this->releaseYear = releaseYear; }

    Artist getArtist() { return artist; }
    void setArtist(Artist artist) { this->artist = artist; }

    Genre getGenre() { return genre; }
    void setGenre(Genre genre) { this->genre = genre; }
};

class MusicLibrary {
private:
    static const int MAX_TRACKS = 100;
    Track tracks[MAX_TRACKS];
    int numTracks;

public:
    MusicLibrary() : numTracks(0) { }

    //Add a new track to the library.
    bool addTrack(Track track) {
        if(numTracks < MAX_TRACKS) {
            //check for duplicate track titles
            for(int i=0; i<numTracks; i++) {
                if(tracks[i].getTitle() == track.getTitle()) {
                    cout << "Track already exists in the library." << endl;
                    return false;
                }
            }

            tracks[numTracks++] = track;
            return true;
        } else {
            cout << "Error: Music library is full. Cannot add more Tracks." << endl;
            return false;
        }
    }


    //Remove a track from the library by title.
    bool removeTrackByTitle(string title) {
        for(int i=0; i<numTracks; i++) {
            if(tracks[i].getTitle() == title) {
                //shift tracks to the left
                for(int j=i; j<numTracks-1; j++) {
                    tracks[j] = tracks[j+1];
                }
                numTracks--;
                return true;
            }
        }
        cout << "Error: Track with title '" << title << "' not found in the library." << endl;
        return false;
    }

    //Remove all tracks from the library by artist
    bool removeTracksByArtist(Artist artist) {
        int removedCount=0;
        for(int i=0; i<numTracks; i++) {
            if(tracks[i].getArtist().getName() == artist.getName()) {
                //shift tracks to the left
                for(int j=i; j<numTracks-1; j++) {
                    tracks[j] = tracks[j+1];
                }
                numTracks--;
                removedCount++;
                i--;    //Recheck the current index as tracks have shifted
            }
        }

        if(removedCount > 0) {
            cout << "Removed " << removedCount << " track(s) by artist '" << artist.getName() << "'." << endl;
            return true;
        } else {
            cout << "Error: No tracks by artist '" << artist.getName() << "' found in the library." << endl;
            return false;
        }
    }

    //Search for tracks by title, artist, genre, or release year and display the matching tracks.
    void searchTracks(string query) {
        bool found = false;
        for(int i=0; i<numTracks; i++) {
            Track track = tracks[i];
            if(track.getTitle() == query || track.getArtist().getName() == query || track.getGenre().getName() == query || to_string(track.getReleaseYear()) == query) {
                cout << "Title: " << track.getTitle() << ", Artist: " << track.getArtist().getName()
                          << ", Genre: " << track.getGenre().getName() << ", Year: " << track.getReleaseYear() << endl;
                found = true;
            }
        }

        if(!found) {
            cout << "No matching tracks found for query '" << query << "'." << endl;
        }
    }

    //Display the entire music library
    void displayLibrary() {
        if(numTracks == 0) {
            cout << "The music library is empty." << endl;
            return;
        }

        cout << "Music Library: " << endl;
        for(int i=0; i<numTracks; i++) {
            Track track = tracks[i];
            cout << "Title: " << track.getTitle() << ", Artist: " << track.getArtist().getName()
                      << ", Genre: " << track.getGenre().getName() << ", Year: " << track.getReleaseYear() << endl;
        }
    }
};

int main() {
    MusicLibrary library;

    while (true) {
        cout << "\nMusic Library Organizer Menu:\n";
        cout << "1. Add a track\n";
        cout << "2. Remove a track by title\n";
        cout << "3. Remove tracks by artist\n";
        cout << "4. Search for tracks\n";
        cout << "5. Display the entire library\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1: {
                string title, artistName, genreName, description, birthdate, nationality;
                int duration, releaseYear;

                cin.ignore(); // Consume newline
                cout << "Enter track title: ";
                getline(cin, title);
                cout << "Enter track duration (seconds): ";
                cin >> duration;
                cout << "Enter release year: ";
                cin >> releaseYear;
                cin.ignore(); // Consume newline
                cout << "Enter artist name: ";
                getline(cin, artistName);
                cout << "Enter artist birthdate: ";
                getline(cin, birthdate);
                cout << "Enter artist nationality: ";
                getline(cin, nationality);
                cout << "Enter genre name: ";
                getline(cin, genreName);
                cout << "Enter genre description: ";
                getline(cin, description);

                Artist artist(artistName, birthdate, nationality);
                Genre genre(genreName, description);
                Track track(title, duration, releaseYear, artist, genre);

                if (library.addTrack(track)) {
                    cout << "Track added to the library." << endl;
                }
                break;
            }
            case 2: {
                cin.ignore(); // Consume newline
                string title;
                cout << "Enter the title of the track to remove: ";
                getline(cin, title);
                library.removeTrackByTitle(title);
                break;
            }
            case 3: {
                cin.ignore(); // Consume newline
                string artistName;
                cout << "Enter the artist's name to remove all tracks by that artist: ";
                getline(cin, artistName);

                Artist artist(artistName, "", ""); // Dummy artist object for searching
                library.removeTracksByArtist(artist);
                break;
            }
            case 4: {
                cin.ignore(); // Consume newline
                string query;
                cout << "Enter search query (title, artist, genre, or release year): ";
                getline(cin, query);
                library.searchTracks(query);
                break;
            }
            case 5:
                library.displayLibrary();
                break;
            case 6:
                cout << "Exiting the program. Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}