#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Movie{
private:
    friend class Movies;
    std::string name;
    std::string rating;
    int timesWatched;
public:
    Movie();
    Movie(string nameV,string ratingV,int watched);
    ~Movie();
    string getName() const {return name;}
    void display() const;
    void incrementWatched(){++timesWatched;}
};

Movie::Movie(){};
Movie::Movie(string nameV,string ratingV,int watched)
    :name{nameV},rating{ratingV},timesWatched{watched}{

    }

Movie::~Movie(){
    
}

void Movie::display() const{
    cout<<name<<" "<<rating<<" "<<timesWatched<<" "<<endl;
}
class Movies{
private:
    std::vector<Movie> movies;
public:
    Movies();
    ~Movies();

    bool addMovie(std::string name, std::string rating, int watched);
    bool incrementWatched(std::string name);
    void display() const;

};

Movies::Movies(){}
Movies::~Movies(){}

bool Movies::addMovie(string name,string rating,int watched){
    for(const Movie &movie : movies){
        if(movie.getName()==name)
            return false;
    }
    Movie temp{name,rating,watched};
    movies.push_back(temp);
    return true;
}

bool Movies::incrementWatched(string name){
    for(Movie &movie : movies){
        if(movie.getName()==name)
            movie.incrementWatched();
            return true;
    }
    return false;
}

void Movies::display() const{
    if(movies.size()==0){
        cout<<"no movies to display\n"<<endl;
    }else{
        cout<<"======================================"<<endl;
        for(Movie movie : movies){
            movie.display();
            cout<<"======================================="<<endl;
        }
    }
}
void addMoive(Movies &movies, string name,string rating,int watched){
    if(movies.addMovie(name,rating,watched)){
        cout<<name<<" added "<<endl;
    }else{
        cout<<name<<" already exists "<<endl;
    }
}
int main(){
    Movies myMovies;
    myMovies.display();

    addMoive(myMovies,"hippo","4",1);
    addMoive(myMovies,"dippo","pg",3);
    addMoive(myMovies,"trash","18+",1);

    myMovies.display();

    addMoive(myMovies,"trash","18+",1);
    myMovies.display();
    return 0;
}