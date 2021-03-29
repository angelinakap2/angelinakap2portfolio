public class testing {

    public void main(String[] args) {
        int arr[] = {2, 2, 4, 4, 4, 2, 2, 1, 3, 5, 5};

        int count = 0;
        int longestSequence = 0;

        for (int i = 0; i < arr.length; i++) {
            if (arr[i] != arr[i - 1] && i != 0) {
                count = 0;
            } else {
                count++;
                if (count > longestSequence) {
                    longestSequence = count;
                }
            }
        }
        System.out.println("hello");
        System.out.println(longestSequence);
    }
}
