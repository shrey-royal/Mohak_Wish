//String is class (An Immutable one)

public class String1 {
    public static void main(String[] args) {
        // String s = "Java";
        // String str = "Hello";
        
        // System.out.println(s.hashCode());
        // s = "Hello World!";
        // System.out.println(s.hashCode());


        String str = "Lorem ipsum dolor, sit amet consectetur adipisicing elit. Quam in, dolore at eum inventore fuga nihil esse. Ullam officiis consequatur molestiae vel quisquam, dolor tempore quos! Asperiores vero, Lorem ipsum dolor, sit amet consectetur adipisicing elit. Quam in, dolore at eum inventore fuga nihil esse.";

        // String str1 = new String();
        // String str2 = new String("Lorem ipsum dolor, sit amet consectetur adipisicing elit. Quam in, dolore at eum inventore fuga nihil esse. Ullam officiis consequatur molestiae vel quisquam, dolor tempore quos! Asperiores vero, Lorem ipsum dolor, sit amet consectetur adipisicing elit. Quam in, dolore at eum inventore fuga nihil esse.");

        //Methods

        // System.out.println(str.charAt(10));
        // System.out.println(str.length());
        // System.out.println(str.substring(12));
        // System.out.println(str.substring(12, 20));
        // System.out.println(str.indexOf(' ', 6));
        // System.out.println(str.lastIndexOf(' ', 150));
        // System.out.println(str.startsWith("dolor", 12));
        // System.out.println(str.endsWith("esse."));
        // System.out.println("ANagh HaS MonEy TrEe".toLowerCase());
        // System.out.println("ANagh HaS MonEy TrEe".toUpperCase());
        // System.out.println("before trim ->" + "   A N A G H      ".trim() + "<- after trim");
        // System.out.println("Anagh is the proud owner of a youtube channel PotatoStuff".replace(" ", "_"));
        // System.out.println(str.contains("sit"));
        // System.out.println("is it really empty?".isEmpty());

        // int i = 12345;
        // String s = String.valueOf(i);
        // System.out.println(((Object)i).getClass().getSimpleName());
        // System.out.println(s.getClass().getSimpleName());

        // int j = Integer.valueOf(s);
        // System.out.println(j);
        // System.out.println(((Object)j).getClass().getSimpleName());

        // System.out.println("Hello ".concat("World!"));

        // System.out.println("Hello".equals("hello"));
        // System.out.println("Hello".equalsIgnoreCase("hello"));
        // System.out.println(String.format("\nthis is a string: -> %s\n%d", str, 124));
        // System.out.printf("\nthis is a string: -> %s\n%d, %.2f", str, 124, 12.22);


        char c[] = {'a', '_', 'b', '_', 'c', '_', 'd'};
        String s = new String(c);
        System.out.println(s);

    }
}



/*
String Methods:
1. charAt(int index): Returns the character at the specified index.
2. length(): Returns the length of the string.
3. substring(int beginIndex): Returns a substring starting from the specified index.
4. substring(int beginIndex, int endIndex): Returns a substring within the specified range.
5. indexOf(int ch): Returns the index of the first occurrence of a specified character.
6. indexOf(int ch, int fromIndex): Returns the index of the first occurrence of a specified character starting from the given index.
7. indexOf(String str): Returns the index of the first occurrence of a specified substring.
8. lastIndexOf(int ch): Returns the index of the last occurrence of a specified character.
9. lastIndexOf(int ch, int fromIndex): Returns the index of the last occurrence of a specified character before the given index.
10. lastIndexOf(String str): Returns the index of the last occurrence of a specified substring.
11. startsWith(String prefix): Checks if the string starts with the specified prefix.
12. endsWith(String suffix): Checks if the string ends with the specified suffix.
13. toLowerCase(): Converts the string to lowercase.
14. toUpperCase(): Converts the string to uppercase.
15. trim(): Removes leading and trailing white spaces.
16. replace(char oldChar, char newChar): Replaces all occurrences of a character with another character.
17. replaceAll(CharSequence target, CharSequence replacement): Replaces all occurrences of a specified CharSequence.
18. contains(CharSequence s): Checks if the string contains the specified sequence of characters.
19. isEmpty(): Checks if the string is empty.
20. valueOf(Object obj): Returns the string representation of an object.
*/

/*
String tasks: 

1. Text Analysis Tool: Develop a tool that analyzes a given text input, providing statistics such as character count, word count, average word length, and frequency of occurrence of certain words or phrases.

2. Password Strength Checker: Create a program that evaluates the strength of a password based on criteria such as length, presence of uppercase letters, lowercase letters, numbers, and special characters.

3. Search Engine: Build a simple search engine that accepts a query string and returns relevant documents or web pages based on matching keywords or phrases found within the documents.

4. Data Parsing and Validation: Design a system to parse and validate data from a CSV or XML file, ensuring that each field or element meets certain formatting or validation rules before processing further.

5. Spell Checker: Implement a spell checker that can detect and suggest corrections for misspelled words in a given text, utilizing dictionaries or word lists to identify valid words.

6. URL Shortener: Develop a URL shortening service that generates short, unique identifiers for long URLs, allowing users to share compact links while redirecting to the original URL when accessed.

7. Text Encryption and Decryption: Create a program that encrypts and decrypts sensitive text data using cryptographic algorithms such as AES or RSA, ensuring secure communication and data storage.

8. File Renaming Tool: Build a tool that renames multiple files within a directory based on user-defined patterns or rules, such as adding prefixes or suffixes, replacing certain characters, or reformatting dates.

9. String Comparison and Matching: Develop a utility for comparing strings and identifying similarities or differences between them, including functionality for fuzzy matching or finding common substrings.

10. Text-based Game or Puzzle Solver: Design a text-based game or puzzle solver that involves manipulating strings, such as solving word puzzles, anagrams, or crossword puzzles, providing hints and solutions as needed.

Test Cases:

1. Text Analysis Tool:
   - Input: "This is a sample text for analysis. It contains words and punctuation marks!"
   - Expected Output: 
     - Character Count: 57
     - Word Count: 10
     - Average Word Length: 5.7
     - Frequency of "text": 1
     - Frequency of "analysis": 1

2. Password Strength Checker:
   - Input: "P@ssw0rd"
   - Expected Output: Strong

3. Search Engine:
   - Query: "Java String class methods"
   - Expected Output: Relevant documents or web pages containing information about Java's String class and its methods.

4. Data Parsing and Validation:
   - Input: CSV file with fields (Name, Age, Email)
   - Sample Record: "John Doe, 30, john@example.com"
   - Expected Output: Valid records are parsed and processed; invalid records raise appropriate validation errors.

5. Spell Checker:
   - Input: "Mistkae in ths sentnce."
   - Expected Output: "Mistake in this sentence."

6. URL Shortener:
   - Original URL: "https://www.example.com/very/long/url/to/test/string/class/usage"
   - Expected Output (Shortened URL): "https://short.url/abc123"

7. Text Encryption and Decryption:
   - Input: "Sensitive data to be encrypted."
   - Expected Output: Encrypted string using a specified algorithm; decryption should yield the original data.

8. File Renaming Tool:
   - Input: Directory with files named "file1.txt", "file2.txt", etc.
   - Expected Output: Files renamed according to user-defined patterns, such as "prefix_file1_suffix.txt".

9. String Comparison and Matching:
   - Input: Two strings, "apple" and "aple"
   - Expected Output: Identify differences, suggest "apple" as a correction.

10. Text-based Game or Puzzle Solver:
    - Input: Word puzzle "C _ T"
    - Expected Output: Possible solutions such as "CAT", "CUT", etc., based on provided hints.

*/