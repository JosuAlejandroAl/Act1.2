#include <iostream>
using namespace std;

int main(){
    int n, m, p, q, pr, r, rest, intento=1, conta=0, des;
    cin>>n;
    int nom[n],cambio[n+1][1000];
    for (int i = 0; i < n; i++){
        cin>>nom[i];
    }
    while (intento==1){
        cin>>p>>q;
        r = q-p;
        for (int l = 0; l < conta; l++){
            //cout<<cambio[n+1][l] << " " << r <<endl;
            if (cambio[n+1][l]==r){
                for(int a=0; a<n ; a++){
                    cout<<cambio[a][l]<<" monedas de "<< nom[a]<<endl;
                }
                des = 0;
            }
        }
        if (des!=0){
            for(int j = n-1; j >= 0 ; j--){
            if (r>0){
                pr = r/nom[j];
                r = r - pr*nom[j];
                cambio[j][conta]=pr;
            }else{
                cambio[j][conta]=0;
            }
            }
            cambio[n+1][conta]=q-p;
            for(int k=0; k<n ; k++){
                cout<<cambio[k][conta]<<" monedas de "<< nom[k]<<endl;
            }
        }
        cout<<"Nuevo calculo? (1 = si, cualquier otro numero = no"<<endl;
        cin >> intento;
        conta+=1;
    }

}
