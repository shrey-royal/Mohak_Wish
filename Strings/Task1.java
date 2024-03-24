public class Task1 {
    public static void main(String[] args) {
        String s = "This is a sample text for analysis. It contains words and punctuation marks!";
        char words[][] = new char[13][20];
        String word[] = new String[words.length];

        int row=0, col=0;
        for (int i = 0; i < s.length(); i++) {
            if(s.charAt(i) != ' ') {
               words[row][col++] = s.charAt(i);
            } else {
                row++;
                col=0;
            }
        }

        int i=0;
        for (char[] cs : words) {
            word[i++] = new String(cs).trim();
        }

        String target = "text";
        int count=0;
        for (String w : word) {
            if (w.equals(target)) {
                count++;
            }
        }

        System.out.println(target + " occurs " + count + " times.");
    }
}
