#include <bits/stdc++.h>
using namespace std;
int arr[5][5]={{1,2,3,4,5},{6,0,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
/*void Markrow(int i){

    for (int j=0;j<5;j++){

        if(arr[i][j]!=0){

            arr[i][j]=-1;

        }

    }
}
void Markcol(int j){

    for (int i=0;i<5;i++){

        if(arr[i][j]!=0){

            arr[i][j]=-1;

        }

    }
}

int main(){

    for(int i=0;i<5;i++){

        for(int j=0;j<5;j++){

            if(arr[i][j]==0){

                Markrow(i);

                Markcol(j);

            }

        }

    }
     for (int i = 0; i < 5; i++) {

        for (int j = 0; j < 5; j++) {

            if (arr[i][j] == -1) {

                arr[i][j] = 0;

            }

        }

    }

    for(int i=0;i<5;i++){

        for(int j=0;j<5;j++){

            cout<<arr[i][j]<<" ";

        }

        cout<<endl;

    }// bruete force approach time complexity is O(n^3) and space complexity is O(1).*/
   /* int main(){
        int col[5]={0};
        int row[5]={0};
        for(int i=0;i<5;i++){
            
            for(int j=0;j<5;j++){

                if(arr[i][j]==0){

                    row[i]=1;

                    col[j]=1;

                }

            }

        }
        for(int i=0;i<5;i++){

            for(int j=0;j<5;j++){

                if(row[i]==1 || col[j]==1){

                    arr[i][j]=0;

                }

            }

        }
        for(int i=0;i<5;i++){

            for(int j=0;j<5;j++){

                cout<<arr[i][j]<<" ";

            }
            cout<<endl;
        }//better solution time complexity is O(n^2) and space complexity is O(n).

    }*/
int main(){
    int col0=1;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(arr[i][j]==0){
                arr[i][0]=0;
                if(j!=0){
                    arr[0][j]=0;
                }
                else{
                    col0=0;
                }
            }
        }
    }
    for(int i=1;i<5;i++){
        for(int j=1;j<5;j++){
            if(arr[i][j]!=0){
                if(arr[i][0]==0 || arr[0][j]==0){
                    arr[i][j]=0;
                }
            }
        }
    }
    if(arr[0][0]==0){
        for(int j=0;j<5;j++){
            arr[0][j]=0;
        }
    }
    if(col0==0){
        for(int i=0;i<5;i++){
            arr[i][0]=0;
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }// optimal solution time complexity is O(n^2) and space complexity is O(1).


}