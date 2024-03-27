public class StrBuff {
    public static void main(String[] args) {
        // CharSequence charseq = "this is a character sequence";
        // StringBuffer sbuff = new StringBuffer(charseq);    //capacity - 16
        // StringBuffer sbuff5 = new StringBuffer(5);    //capacity - 5

        // System.out.println(sbuff.capacity());
        // sbuff5.append("abcde");
        // System.out.println(sbuff5.capacity());

        // StringBuffer sbuff = new StringBuffer();
        // System.out.println(sbuff.hashCode());

        // sbuff.insert(0, "Java");
        // sbuff.insert(sbuff.length(), " is a programming language");
        // sbuff.append(1234.2);
        // System.out.println(sbuff);
        // System.out.println(sbuff.hashCode());

        // StringBuffer s1 = new StringBuffer(sbuff);
        // System.out.println(s1.hashCode());

        StringBuffer sbuff = new StringBuffer();

        // sbuff.append("This is a string but a mutable one which means we can change the data on our will");

        // System.out.println(sbuff);
        // sbuff.delete(0, 5);
        // System.out.println("'" + sbuff + "'");
        // sbuff.replace(0, 1, "Hello, ");
        // System.out.println("'" + sbuff + "'");
        // sbuff.reverse();
        // System.out.println(sbuff);
        

        sbuff.ensureCapacity(17);
        System.out.println(sbuff.length() + " - " + sbuff.capacity());
        sbuff.append("a string with more than 16 characters is here");
        System.out.println(sbuff.length() + " - " + sbuff.capacity());

    }
}

/*
StringBuffer class is used to create mutable string objects.
Thread Safe (multiple thread can't access it simultaneously)

default capacity: 16

append(String s)
insert(int offset, String s)
replace(int startindex, int endindex, String s)
delete(int startindex, int endindex)
reverse()
capacity() - new capacity will be allocated to the string acc. to ((oldCapacity*2) + 2)
ensureCapacity(int minimumCapacity)

*/