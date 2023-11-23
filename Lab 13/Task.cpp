#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <numeric>


using namespace std;


inline void line(){cout<<"========================================="<<endl;}

class Player{
private:
    string name;
    int score;

public:
    Player(const string& _name, int _score) : name(_name), score(_score) {}

    string getName() const { return name; }
    int getScore() const { return score; }
};

class Scoreboard{
private:
    vector<Player> players;


    vector<Player> deserializePlayers(const string& filename) {
        ifstream inputFile(filename);

        if(inputFile.is_open()){
            string line;
            while (getline(inputFile, line)){

                size_t commaPos = line.find(',');

                if (commaPos != string::npos){ // if any position matched

                    // extract name and score
                    string name = line.substr(0, commaPos);
                    int score = stoi(line.substr(commaPos + 1)); //st to int

                    
                    players.push_back(Player(name, score));
                } else {
                    cerr << "Invalid format in line: " << line << endl;
                }
            }

            inputFile.close();
        } else {
            cerr << "Unable to open the file: " << filename << endl; //error stream
        }

        return players;
    }
    

public:

    Scoreboard(const string& filename){
        deserializePlayers(filename);
    }

    void displayAll () const{
        cout<<"All Players"<<endl;
        line();
        for(const auto& _Player : players) {
            cout<<_Player.getName() <<"\t"<< _Player.getScore() <<endl;
        }
    }

    void displayWithoutVowels () const{
        cout<<"Plyr nms wtht vwls"<<endl;
        line();
        for(const auto& _Player : players) {
            string tmp = "";
            const string& name=_Player.getName();
            int length = name.length();

            for(int i = 0; i < length; i++) {
                if (name[i] != 'a' && name[i] != 'e' && name[i] != 'i' && name[i] != 'o' && name[i] != 'u' &&
                    name[i] != 'A' && name[i] != 'E' && name[i] != 'I' && name[i] != 'O' && name[i] != 'U') {
                    tmp += name[i];
                }
            }

            cout<<tmp<<endl;
        }
    }

    void displayTopPlayers () const{
        int top=5;
        vector<Player> tmp(players);

        stable_sort(tmp.begin(), tmp.end(), [](const Player& a, const Player& b) { // comparator for custom data type
            return a.getScore() > b.getScore();
        });

        cout<<"Top "<<top<<" players"<<endl;
        line();
        for (int i = 0; i < top && i < tmp.size(); ++i) {
            cout <<i+1<<".  "<<tmp[i].getName() <<"\t"<< tmp[i].getScore()<<endl;
        }
    }


    void displayAlphabeticalPlayers () const{
        vector<Player> tmp(players);

        sort(tmp.begin(), tmp.end(), [](const Player& a, const Player& b) { // comparator for custom data type
            return a.getName() < b.getName();
        });

        cout << "Player in alphabetical order"<<endl;
        line();
        for(const auto& _Player : tmp) {
            cout<<_Player.getName() <<"\t"<< _Player.getScore()<<endl;
        }
    }

    
    void displayPlayersReversed () const{
        vector<Player> tmp(players);

        reverse(tmp.begin(), tmp.end());

        cout << "Player in Reversed order"<<endl;
        line();
        for(const auto& _Player : tmp) {
            cout<<_Player.getName() <<"\t"<< _Player.getScore()<<endl;
        }
    }


    int scoredHigherThan (int baseline) const{
        int scorers=0;

        for(const auto& _Player : players) {
            if(_Player.getScore()>baseline)
                scorers++;
        }

        return scorers;
    }


    int scoredEqualTo (int baseline) const{
        int scorers=0;

        for(const auto& _Player : players) {
            if(_Player.getScore()==baseline)
                scorers++;
        }

        return scorers;
    }

    double averageScore() const {
        double total = accumulate(players.begin(), players.end(), 0.0, 
            [](double s, const Player& player) {
                            return s + player.getScore();
                        }
                    );
        return total / players.size();
    }


    bool operator==(Scoreboard& obj) const{
        if (players.size() != obj.players.size()) {
            return false;
        }

        for (size_t i = 0; i < players.size(); i++) {
            if (!((players[i].getName() == obj.players[i].getName()) or (players[i].getScore() == obj.players[i].getScore()))) {
                return false;
            }
        }

        return true;
    }
};


int main(){
    Scoreboard game("player.txt");
    int score=6900;

    game.displayWithoutVowels();
    game.displayAll();
    game.displayTopPlayers();
    game.displayAlphabeticalPlayers();
    game.displayPlayersReversed();
    line();
    cout<<game.scoredHigherThan(score)<<" players scored more than "<<score<<endl;
    cout<<game.scoredEqualTo(score)<<" players scored "<<score<<endl;
    cout<<game.averageScore()<<" was the average score"<<endl;


    Scoreboard hall_of_fame(game);
    line();
    if(hall_of_fame==game)
        cout<<"hall_of_fame and game are equal"<<endl;
    else
        cout<<"hall_of_fame and game are not equal"<<endl;


    return 0;
}