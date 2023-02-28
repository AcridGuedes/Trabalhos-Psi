#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    int nums[5] = { 1, 7, 5, 9, 0}, temp = -1;
    
    for(int k = 0;  k < 5 -1 ; k++)
    {
        for(int j = 0; j <= 5 - k - 2; j++ ){
            if(nums[j] > nums[j+1])
            {
                temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
        for(i = 0; i < 5;i++ )
        {
            cout<<nums[i];
        }
        cout<<endl;
    }
    
}
