
#include <iostream>
#include<map>
using namespace std;
int l=0,flag=0;
 int store[30][30];
void combinationUtil(int arr[], int n, int r,int index, int data[], int o);


void printCombination(int arr[], int n, int r)
{
	int data[r];
	combinationUtil(arr, n, r, 0, data, 0);
}


void combinationUtil(int arr[], int n, int r, int index,
					int data[], int o)
{
	if (index == r) {
		for (int j = 0; j < r; j++){
			store[l][j]=data[j];
		}
		l++;
		return;
	}

	if (o >= n)
		return;

	data[index] = arr[o];
	combinationUtil(arr, n, r, index + 1, data, o + 1);

	combinationUtil(arr, n, r, index, data, o + 1);
}

int main()
{
    map<int, string> mymap;
  mymap[0] = "Sun Music";
  mymap[1] = "Sun TV";
  mymap[2] = "Star Sports";
  mymap[3] = "HBO";
  mymap[4] = "Sun News";
  mymap[5] = "Republic TV";
  mymap[6] = "CNBC TV18";
  mymap[7] = "Cartoon Network";
  mymap[8] = "Romedy Now";
  mymap[9] = "Pogo";
  mymap[10] = "Channel V";
  mymap[11] = "Set Max";
  mymap[12] = "Colors HD";
  mymap[13] = "Sony Pix";
  mymap[14] = "Maa TV";
  mymap[15] = "Gemini TV";
  mymap[16] = "Maa Music";
  mymap[17] = "DD Podhigai";
  mymap[18] = "Animal Planet";
  mymap[19] = "TLC";
  mymap[20] = "MTV";
  mymap[21] = "Nickelodeon";
  mymap[22] = "Surya TV";
  mymap[23] = "Comedy Central";
  mymap[24] = "Star World";
  mymap[25] = "NDTV 24/7";
  mymap[26] = "NDTV Profit";
  mymap[27] = "DD Malayalam";
  mymap[28] = "Fox News";
  mymap[29] = "Puthiya Thalaimurai";

     int solution[30][5]={
{1,1,1,1,1},//0
{1,1,1,1,1},//1
{1,1,1,1,0},//2
{1,1,0,1,1},//3
{1,1,1,1,0},//4
{1,1,0,1,1},//5
{1,1,1,1,1},//6
{1,1,0,1,0},//7
{1,1,0,1,0},//8
{1,1,1,1,0},//9
{1,1,0,1,0},//10
{1,1,1,1,0},//11
{1,1,1,1,0},//12
{1,1,0,1,0},//13
{1,1,1,1,0},//14
{1,1,1,1,1},//15
{1,1,0,1,0},//16
{1,1,1,1,1},//17
{1,1,1,1,0},//18
{1,1,1,1,1},//19
{1,1,1,1,1},//20
{1,1,1,0,0},//21
{0,1,1,1,0},//22
{1,1,0,0,1},//23
{0,1,1,0,1},//24
{1,0,1,1,0},//25
{0,0,1,1,1},//26
{0,1,1,1,0},//27
{1,1,1,0,1},//28
{0,0,0,1,0}//29
};
   int channel[30],i=0,j;
   int dth[5]={0,0,0,0,0};
   cout<<" 0 : Sun Music\n 1 : Sun TV \n 2 : Star Sports \n 3 : HBO \n 4 : Sun News \n 5 : Republic TV \n 6 : CNBC TV18 \n 7 : Cartoon Network \n 8 : Romedy Now \n 9 : Pogo \n 10: Channel V \n";
   cout<<" 11: Set Max \n 12: Colors HD \n 13: Sony Pix \n 14: Maa TV \n 15: Gemini TV \n 16: Maa Music \n 17: DD Podhigai \n 18: Animal Planet \n 19: TLC \n 20: MTV \n";
   cout<<" 21: Nickelodeon \n 22: Surya TV \n 23: Comedy Central \n 24: Star World \n 25: NDTV 24/7 \n 26: NDTV Profit \n 27: DD Malayalam \n 28: Fox News \n 29: Puthiya Thalaimurai";
   cout<<"\n Enter required channel IDs associated with the channel\n Example press type 0 if you want Sun Music\n (Press 31 to stop)\n";

   do{
       cin>>channel[i];
        if(channel[i]==31)
       {
           cout<<"Thank you for choosing the channels\n";
           break;
       }
       else if(channel[i]>=30 || channel[i]<0){
           cout<<"Channel does not Exist\n";
       }
       else{
           i++;

       }
       if(i>30)
       {
           break;
       }

   }while(channel[i]!=31);

   int arr[30] ;
    for(j=0;j<i;j++){
        cout<<channel[j]<<" ";
        arr[j] = channel[j];
        store[0][j]=channel[j];
    }
    int m=0,ins=0,r=0,county=0;

    /*
    cout<<" \nthe value in store is: \n";
    for(int u=0;u<i;u++){
        cout<<" "<<store[0][u];
    }
    */
    //Loop for DTH solution.
    /* h= row of store
       y= column f store
       m= no of columns
       l= no of rows
       ins=channel index from store
       e= index of dth[]
       r= subset length*/
       r=i;

        int h=0;
        while(1){
        m=r;
        //if(flag >= 1){l=l-1;}
        //combinations of store
        for(h=0;h<l+1;h++){
                for(int dth_var=0; dth_var<5; dth_var++){
                    dth[dth_var]=0;}
                county=0;
        for (int y=0;y<m;y++){
            ins=store[h][y];
            for(int e=0;e<5;e++){
                if(solution[ins][e]== 1){
                    dth[e]=dth[e]+1;
                }
            }
            //goes to next channel
        }
        /*
        cout<<"\n dth values";
        for(int w=0;w<r;w++){
            cout<<" "<<dth[w];
        }
        cout<<"\n";*/

        //if all selected channel got common dth then we print them
        cout<<"\n";
        for(int common=0;common<5;common++){
            if(dth[common]==r){
                    if(common ==0){
                cout<<"(.)Airtel ";
                    }
                    else if(common ==1){
                cout<<"(.)Tata Sky ";
                    }
                    else if(common ==2){
                cout<<"(.)Dish TV ";
                    }
                    else if(common ==3){
                cout<<"(.)Sun Direct ";
                    }
                    else if(common ==4){
                cout<<"(.)Videocon ";
                    }
                county++;
            }
        }

        if(county >=1){
            cout<<"Is/Are the DTH available with the selected channel(s) like :-";
            for(int store_y=0; store_y<m;store_y++){
                int appy=store[h][store_y];
                cout<<"\n* "<<mymap[appy];
            }
            cout<<"\n-------------------------------------------------------------------------------------------------------------------------\n";
        }
        }

        if(county==0){
                flag++;
            r = r-1;
            int n = i; //i;
            printCombination(arr, n, r);
            cout<<"\n";
            //printing the combinations
            //int z=0,q=0; //i-k;
            /*for(z=0;z<l;z++){
                    for(q=0;q<r;q++){
                        cout<<store[z][q]<<" ";
                    }
                    cout<<"\n";
                }*/
              if(r<2){
                    cout<<"No two channels in the given mix is provided by a single DTH\n";
                    break;}
            }
            else{
                   if (flag>0){ cout<<"\nSome channels are missing due to their availability in DTH, no single DTH can provide all the selected channel\n\nThe best possible combination is provided as above by some DTH";}
                    break;}
        }

	return 0;
}
