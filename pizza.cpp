#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("e_elaborate.in.txt", "r", stdin);
    freopen("solutione.txt", "w", stdout);

    int C = 0, numoflikes = 0, numofdislikes = 0, i = 0;
    string temp;
    cin >> C;
    multimap <string, int> likes;
    multimap <string, int> dislikes;
    vector <string> selected;
    
    for (int i = 0; i<C; i++){
        cin >> numoflikes;
        while(numoflikes--){
            cin >> temp;
            if (likes.find(temp) == likes.end()){
                likes.insert(pair<string, int>(temp, 1));
            }
            else{
                (likes.find(temp)->second)++;
            }
        }
        
        cin >> numofdislikes;
        while (numofdislikes--){
            cin >> temp;
            if (dislikes.find(temp) == dislikes.end()){
                dislikes.insert(pair<string, int>(temp, 1));
            }
            else{
                (dislikes.find(temp)->second)++;
            }
        }
        
    }

    for (auto i:likes){
        if (dislikes.find(i.first) == dislikes.end()){
                selected.push_back(i.first);
        }
    }
    cout << selected.size() << ' ';
    for (int i = 0; i<selected.size(); i++){
        cout << selected[i] << ' ';
    }
}