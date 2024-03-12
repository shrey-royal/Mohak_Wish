class Book {
    private String title;
    private String author;
    private int publicationYear;
    private boolean available;

    public Book(String title, String author, int publicationYear) {
        this.title = title;
        this.author = author;
        this.publicationYear = publicationYear;
        this.available = true;
    }

    public String getTitle() {
        return title;
    }

    public String getAuthor() {
        return author;
    }

    public int getPublicationYear() {
        return publicationYear;
    }

    public boolean isAvailable() {
        return available;
    }

    public void setAvailable(boolean available) {
        this.available = available;
    }
}

class Patron {
    private String name;
    private String address;
    private Book[] borrowedBooks;
    private int numBorrowedBooks;

    public Patron(String name, String address, int maxBooks) {
        this.name = name;
        this.address = address;
        this.borrowedBooks = new Book[maxBooks];
        this.numBorrowedBooks = 0;
    }

    public String getName() {
        return name;
    }

    public String getAddress() {
        return address;
    }

    public Book[] getBorrowedBooks() {
        return borrowedBooks;
    }

    public void borrowBook(Book book) {
        if(numBorrowedBooks < borrowedBooks.length) {
            borrowedBooks[numBorrowedBooks++] = book;
            book.setAvailable(false);
        } else {
            System.out.println("Cannot borrow more books.");
        }
    }

    public void returnBook(Book book) {                     ///hidden jutsu
        for (int i = 0; i < numBorrowedBooks; i++) {
            if(borrowedBooks[i] == book) {
                for(int j = i; j < numBorrowedBooks-1; j++) {
                    borrowedBooks[j] = borrowedBooks[j+1];
                }
                borrowedBooks[--numBorrowedBooks] = null;
                book.setAvailable(true);
                return;
            }
        }
        System.out.println("Book not found in the borrowed books.");
    }
}

class LibraryStaff {
    private String name;
    private String employeeID;
    private String position;

    public LibraryStaff(String name, String employeeID, String position) {
        this.name = name;
        this.employeeID = employeeID;
        this.position = position;
    }

    public String getName() {
        return name;
    }

    public String getEmployeeID() {
        return employeeID;
    }

    public String getPosition() {
        return position;
    }
}

class Library {
    private Book[] books;
    private Patron[] patrons;
    private LibraryStaff[] staff;
    private int numBooks;
    private int numPatrons;
    private int numStaff;

    public Library(int maxBooks, int maxPatrons, int maxStaff) {
        this.books = new Book[maxBooks];
        this.patrons = new Patron[maxPatrons];
        this.staff = new LibraryStaff[maxStaff];
        this.numBooks = 0;
        this.numPatrons = 0;
        this.numStaff = 0;
    }

    public void addBook(Book book) {
        if(numBooks < books.length) {
            books[numBooks++] = book;
        } else {
            System.out.println("Cannot add more books.");
        }
    }

    public void addPatron(Patron patron) {
        if(numPatrons < patrons.length) {
            patrons[numPatrons++] = patron;
        } else {
            System.out.println("Cannot add more patrons.");
        }
    }

    public void addStaff(LibraryStaff staffMember) {
        if(numStaff < staff.length) {
            staff[numStaff++] = staffMember;
        } else {
            System.out.println("Cannot add more staff members.");
        }
    }

    public void borrowBook(Patron patron, Book book) {
        if(book.isAvailable()) {
            patron.borrowBook(book);
            System.out.println("Book '" + book.getTitle() + "' borrowed by " + patron.getName() + ".");
        } else {
            System.out.println("Book '" + book.getTitle() + "' is not available for borrowing.");
        }
    }

    public void borrowBook(Patron patron, Book book, int durationInDays) {
        if(book.isAvailable()) {
            patron.borrowBook(book);
            System.out.println("Book '" + book.getTitle() + "' borrowed by " + patron.getName() + " for " + durationInDays + " days.");
        } else {
            System.out.println("Book '" + book.getTitle() + "' is not available for borrowing.");
        }
    }

    public double calculateFine(Patron patron) {
        //logic
        return 0.0;
    }
}