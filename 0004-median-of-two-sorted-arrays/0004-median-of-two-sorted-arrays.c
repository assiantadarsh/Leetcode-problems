double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int i = 0,j = 0,k = 0;
    int start  = 0;
    int end  = nums1Size + nums2Size - 1;
    int totalsize = end + 1;
    int temp[end + 1];

    while(i < nums1Size && j < nums2Size){
        if(nums1[i] <= nums2[j]){
            temp[k] = nums1[i];
            i++;
        }
        else{
            temp[k] = nums2[j];
            j++;
        }
        k++;
    }

    while(i < nums1Size){
        temp[k] = nums1[i];
        i++;
        k++;
    }
    while(i < nums1Size){
        temp[k] = nums1[i];
        i++;
        k++;
    }
    while(j < nums2Size){
        temp[k] = nums2[j];
        j++;
        k++;
    }
    int mid = start + (end -start) / 2;
    if(totalsize % 2 != 0){
        return temp[mid];
    }
    else{
        return (temp[mid] + temp[mid+1]) / 2.0;
    }
}