class secondLargest {
    public static void main(String[] args) {
        int[] arr = {10, 20, 5, 8};

        int max = Integer.MIN_VALUE;
        int second = Integer.MIN_VALUE;

        for(int x : arr){
            if(x > max){
                second = max;
                max = x;
            }
            else if(x > second && x != max){
                second = x;
            }
        }
        System.out.println("Second Largest: " + second);
    }
}
