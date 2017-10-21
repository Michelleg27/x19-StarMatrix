#include <iostream>
#include <string>
#include <vector>

using namespace std; 


int main()
{
vector<vector<char> >starMatrix;

int rowSize; 
int colSize;
char star='*';

cout<<"Enter rows and columns of stars:"<<endl;
cin>>rowSize;
cin>>colSize;
starMatrix.resize(rowSize);
starMatrix.resize(colSize);

for ( int row = 0; row<starMatrix.size(); row++)
    {

        for (int col = 0; col<starMatrix[0].size(); col++)
            {
           cout<<star;
           
        }
           cout<<endl;
    }    
if (rowSize>0 && colSize>0) 

    return 0;
}    
