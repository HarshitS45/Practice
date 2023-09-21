/*
 * @Author - Harshit Srivastava
 * Question - Spirally traversing a matrix
 * Input - matrix= {{1, 2, 3, 4},
                    {5, 6, 7, 8},
                    {9, 10, 11, 12},
                    {13, 14, 15,16}};
 *Output - 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
 */


#include<bits/stdc++.h>
using namespace std;

int spirallyTraverse(vector<vector<int> > matrix, int r, int c)
    {
        vector<int> v;
        int i=0,j=0,step=0;
        while(v.size()<(r*c)){
            while(i<c-step){
                v.push_back(matrix[j][i]);
		cout<<matrix[j][i]<<" ";
                i++;
            }
            j++;
            i--;
            while(j<r-step && v.size()<(r*c)){
                v.push_back(matrix[j][i]);
		cout<<matrix[j][i]<<" ";
                j++;
            }
            i--;
            j--;
            while(i>=step && v.size()<(r*c)){
                v.push_back(matrix[j][i]);
		cout<<matrix[j][i]<<" ";
                i--;
            }
            j--;
            i++;
            while(j>=1+step && v.size()<(r*c)){
                v.push_back(matrix[j][i]);
		cout<<matrix[j][i]<<" ";
                j--;
            }
            i++;
            j++;
            step++;
        }
        return 0;
    }
int main(){
	int r = 4, c = 4;
	vector<vector<int> > matrix= {{1, 2, 3, 4},
          	    	   	      {5, 6, 7, 8},
                                      {9, 10, 11, 12},
                                      {13, 14, 15,16}};
	spirallyTraverse(matrix,r,c);
}
