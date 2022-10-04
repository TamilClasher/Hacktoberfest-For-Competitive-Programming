import java.util.Arrays;

public class binary_search {
    public static void main(String[] args) {
        int arr[] = { 1, 2, 4, 5, 6 };

        Arrays.sort(arr);

        int search = 2;

        int ans = binary_search(0, (arr.length - 1), arr, search);

        System.out.println(ans);
    }

    static int binary_search(int low, int high, int arr[], int search) {
        if (low <= high) {
            int mid = (high + low) / 2;
            if (search == arr[mid]) {
                return mid;
            } else if (search > arr[mid]) {
                return binary_search(mid + 1, high, arr, search);
            } else {
                return binary_search(low, mid - 1, arr, search);
            }
        }

        return -1;

    }

}
