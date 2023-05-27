#include <iostream>
#include <string>

using namespace std;

const int MAX_MOVIES = 100;

class Movie {
private:
    string title;
    string genre;
    int year;
    float rating;
    string description;

public:
    Movie(const string& title, const string& genre, int year, float rating, const string& description)
        : title(title), genre(genre), year(year), rating(rating), description(description) {}

    string getTitle() const {
        return title;
    }

    string getGenre() const {
        return genre;
    }

    int getYear() const {
        return year;
    }

    float getRating() const {
        return rating;
    }

    string getDescription() const {
        return description;
    }

    virtual void getGenreDescription()  {
        //return "No description available.";
    }
};

//1
class ActionMovie : public Movie {
public:
    ActionMovie(const string& title, int year, float rating, const string& description)
        : Movie(title, "Action", year, rating, description) {}

    void getGenreDescription()  {
        cout<< "Action-packed movie.";
    }
};

//2
class DramaMovie : public Movie {
public:
    DramaMovie(const string& title, int year, float rating, const string& description)
        : Movie(title, "Drama", year, rating, description) {}

    void getGenreDescription() {
        cout<< "Drama-packed movie.";
    }
};

//3
class ComedyMovie : public Movie {
public:
    ComedyMovie(const string& title, int year, float rating, const string& description)
        : Movie(title, "Comedy", year, rating, description) {}

    void getGenreDescription() {
        cout<< "Comedy-packed movie.";
    }
};

//4
class ThrillerMovie : public Movie {
public:
    ThrillerMovie(const string& title, int year, float rating, const string& description)
        : Movie(title, "Thriller", year, rating, description) {}

    void getGenreDescription() {
        cout<< "Thriller-packed movie.";
    }
};

//5
class HorrorMovie : public Movie {
public:
    HorrorMovie(const string& title, int year, float rating, const string& description)
        : Movie(title, "Horror", year, rating, description) {}

    void getGenreDescription() {
        cout<< "Horror-packed movie.";
    }
};

//6
class RomanceMovie : public Movie {
public:
    RomanceMovie(const string& title, int year, float rating, const string& description)
        : Movie(title, "Romance", year, rating, description) {}

    void getGenreDescription() {
        cout<< "Romance-packed movie.";
    }
};

//7
class FantasyMovie : public Movie {
public:
    FantasyMovie(const string& title, int year, float rating, const string& description)
        : Movie(title, "Fantasy", year, rating, description) {}

    void getGenreDescription()  {
        cout<< "Fantasy-packed movie.";
    }
};

//8
class SciFiMovie : public Movie {
public:
    SciFiMovie(const string& title, int year, float rating, const string& description)
        : Movie(title, "SciFi", year, rating, description) {}

    void getGenreDescription() {
        cout<<"SciFi-packed movie.";
    }
};

//9
class MysteryMovie : public Movie {
public:
    MysteryMovie(const string& title, int year, float rating, const string& description)
        : Movie(title, "Mystery", year, rating, description) {}

    void getGenreDescription() {
        cout<< "Mystery-packed movie.";
    }
};

//10
class WarMovie : public Movie {
public:
    WarMovie(const string& title, int year, float rating, const string& description)
        : Movie(title, "War", year, rating, description) {}

    void getGenreDescription() {
        cout<< "War-packed movie.";
    }
};

//11
class SportsMovie : public Movie {
public:
    SportsMovie(const string& title, int year, float rating, const string& description)
        : Movie(title, "Sports", year, rating, description) {}

    void getGenreDescription() {
        cout<< "Sports-packed movie.";
    }
};


//12
class BiographyMovie : public Movie {
public:
    BiographyMovie(const string& title, int year, float rating, const string& description)
        : Movie(title, "Biography", year, rating, description) {}

    void getGenreDescription() {
        cout<< "Biography-packed movie.";
    }
};


class MovieLibrary {
private:
    Movie* movies[MAX_MOVIES];
    int numMovies;

public:
    MovieLibrary() : numMovies(0) {}

    void addMovie(Movie* movie) {
        if (numMovies < MAX_MOVIES) {
            movies[numMovies] = movie;
            numMovies++;
        }
    }
void addMoviesToLibrary() {
    const int NUM_MOVIES = 60 ;
    Movie* movies[NUM_MOVIES] = {
        // ACTION
        new ActionMovie("John Wick", 2014, 7.4, "An ex-hit-man comes out of retirement to track down the gangsters that killed his dog and took his car."),
        new ActionMovie("Heat", 1995, 8.3, "A group of high-end professional thieves start to feel the heat from the LAPD when they unknowingly leave a clue at their latest heist."),
        new ActionMovie("Top Gun", 1986, 6.9, "As students at the United States Navy's elite fighter weapons school compete to be best in the class, one daring young pilot learns a few things from a civilian instructor that are not taught in the classroom."),
        new ActionMovie("Die Hard", 1988, 8.2, "A New York City police officer tries to save his estranged wife and several others taken hostage by terrorists during a Christmas party at the Nakatomi Plaza in Los Angeles."),
        new ActionMovie("The Fast and Furious", 2001, 6.8, "Los Angeles police officer Brian O'Conner must decide where his loyalty really lies when he becomes enamored with the street racing world he has been sent undercover to destroy."),
        new ActionMovie("The Dark Knight", 2008, 9, "When the menace known as the Joker wreaks havoc and chaos on the people of Gotham, Batman must accept one of the greatest psychological and physical tests of his ability to fight injustice."),
        new ActionMovie("The Batman", 2022, 7.8, "When a sadistic serial killer begins murdering key political figures in Gotham, Batman is forced to investigate the city's hidden corruption and question his family's involvement."),
        new ActionMovie("Mission: Impossible", 1996, 7.1, "An American agent, under false suspicion of disloyalty, must discover and expose the real spy without the help of his organization."),

        // COMEDY
        new ComedyMovie("Superbad", 2007, 7.6, "Two co-dependent high school seniors are forced to deal with separation anxiety after their plan to stage a booze-soaked party goes awry."),
        new ComedyMovie("Rush Hour", 1998, 7, "A loyal and dedicated Hong Kong Inspector teams up with a reckless and loudmouthed L.A.P.D. detective to rescue the Chinese Consul's kidnapped daughter, while trying to arrest a dangerous crime lord along the way."),
        new ComedyMovie("Airplane!", 1980, 7.7, "After the crew becomes sick with food poisoning, a neurotic ex-fighter pilot must land a commercial airplane full of passengers safely."),
        new ComedyMovie("Office Space", 1999, 7.6, "Three company workers who hate their jobs decide to rebel against their greedy boss."),
        new ComedyMovie("Knives Out", 2019, 7.9, "A detective investigates the death of the patriarch of an eccentric, combative family."),
        new ComedyMovie("Another Round", 2020, 7.7, "Four high-school teachers consume alcohol on a daily basis to see how it affects their social and professional lives."),
        new ComedyMovie("Night at the Museum", 2006, 6.4, "A newly recruited night security guard at the Museum of Natural History discovers that an ancient curse causes the animals and exhibits on display to come to life and wreak havoc."),
        new ComedyMovie("The Grand Budapest Hotel", 2014, 8.1, "A writer encounters the owner of an aging high-class hotel, who tells him of his early years serving as a lobby boy in the hotel's glorious years under an exceptional concierge."),

        // DRAMA
        new DramaMovie("Pulp Fiction", 1994, 8.9, "The lives of two mob hitmen, a boxer, a gangster and his wife, and a pair of diner bandits intertwine in four tales of violence and redemption."),
        new DramaMovie("The Shawshank Redemption", 1994, 9.3, "Over the course of several years, two convicts form a friendship, seeking consolation and, eventually, redemption through basic compassion."),
        new DramaMovie("The Whale", 2022, 7.7, "A reclusive, morbidly obese English teacher attempts to reconnect with his estranged teenage daughter."),
        new DramaMovie("Manchester by The Sea", 2016, 7.8, "A depressed uncle is asked to take care of his teenage nephew after the boy's father dies."),
        new DramaMovie("The Wolf of Wall Street", 2013, 8.2, "Based on the true story of Jordan Belfort, from his rise to a wealthy stock-broker living the high life to his fall involving crime, corruption and the federal government."),
        new DramaMovie("12 years as Slave", 2013, 8.1, "In the antebellum United States, Solomon Northup, a free black man from upstate New York, is abducted and sold into slavery."),
        new DramaMovie("The Social Network", 2010, 7.8, "As Harvard student Mark Zuckerberg creates the social networking site that would become known as Facebook, he is sued by the twins who claimed he stole their idea and by the co-founder who was later squeezed out of the business."),
        new DramaMovie("The Godfather", 1972, 9.2, "Don Vito Corleone, head of a mafia family, decides to hand over his empire to his youngest son Michael. However, his decision unintentionally puts the lives of his loved ones in grave danger."),

        // THRILLER
        new ThrillerMovie("Memento", 2000, 8.4, "A man with short-term memory loss attempts to track down his wife's murderer."),
        new ThrillerMovie("The Sixth Sense", 1999, 8.2, "Malcolm Crowe, a child psychologist, starts treating a young boy, Cole, who encounters dead people and convinces him to help them. In turn, Cole helps Malcolm reconcile with his estranged wife."),
        new ThrillerMovie("Zodiac", 2007, 7.7, "Between 1968 and 1983, a San Francisco cartoonist becomes an amateur detective obsessed with tracking down the Zodiac Killer, an unidentified individual who terrorizes Northern California with a killing spree."),
        new ThrillerMovie("Se7en", 1995, 8.6, "Two detectives, a rookie and a veteran, hunt a serial killer who uses the seven deadly sins as his motives."),
        new ThrillerMovie("Psycho", 1960, 8.5, "A Phoenix secretary embezzles $40,000 from her employer's client, goes on the run and checks into a remote motel run by a young man under the domination of his mother."),
        new ThrillerMovie("The Silence of The Lambs", 1991, 8.6, "A young F.B.I. cadet must receive the help of an incarcerated and manipulative cannibal killer to help catch another serial killer, a madman who skins his victims."),
        new ThrillerMovie("Parasite", 2019, 8.5, "Greed and class discrimination threaten the newly formed symbiotic relationship between the wealthy Park family and the destitute Kim clan."),

        //HORROR
        new HorrorMovie("Bird Box", 2018, 6.6, "Five years after an ominous unseen presence drives most of society to suicide, a mother and her two children make a desperate bid to reach safety."),
        new HorrorMovie("The Conjuring", 2013, 7.5, "Paranormal investigators Ed and Lorraine Warren work to help a family terrorized by a dark presence in their farmhouse."),
        new HorrorMovie("A Quiet Place", 2018, 7.5, "A family struggles for survival in a world where most humans have been killed by blind but noise-sensitive creatures. They are forced to communicate in sign language to keep the creatures at bay."),
        new HorrorMovie("Scream", 1996, 7.4, "A year after the murder of her mother, a teenage girl is terrorized by a masked killer who targets her and her friends by using scary movies as part of a deadly game."),
        new HorrorMovie("Get Out", 2017, 7.7, "A young African-American visits his White girlfriend's parents for the weekend, where his simmering uneasiness about their reception of him eventually reaches a boiling point."),
        new HorrorMovie("Annabelle", 2014, 5.4, "A couple begins to experience terrifying supernatural occurrences involving a vintage doll shortly after their home is invaded by satanic cultists."),

        //ROMANCE
        new RomanceMovie("The Curious Case of Benjamin Button", 2008, 7.8, "Tells the story of Benjamin Button, a man who starts aging backwards with consequences."),
        new RomanceMovie("Me Before You", 2016, 7.4, "A girl in a small town forms an unlikely bond with a recently-paralyzed man she's taking care of."),
        new RomanceMovie("The Holiday", 2006, 6.9, "Two women troubled with guy-problems swap homes in each other's countries, where they each meet a local guy and fall in love."),
        new RomanceMovie("The Ugly Truth", 2009, 6.4, "An uptight television producer takes control of a morning show segment on modern relationships hosted by a misogynistic man."),
        new RomanceMovie("The Notebook", 2004, 7.8, "A poor yet passionate young man falls in love with a rich young woman, giving her a sense of freedom. However, social differences soon get in the way."),
        new RomanceMovie("Pride & Prejudice", 2005, 7.8, "Sparks fly when spirited Elizabeth Bennet meets single, rich, and proud Mr. Darcy. But Mr. Darcy reluctantly finds himself falling in love with a woman beneath his class. Can each overcome their own pride and prejudice?"),

        //FANTASY
        new FantasyMovie("The Chronicles of Narnia: The Lion, the Witch and the Wardrobe", 2005, 6.9, "Four kids travel through a wardrobe to the land of Narnia and learn of their destiny to free it with the guidance of a mystical lion."),
        new FantasyMovie("Harry Potter and The Half-Blood Prince", 2009, 7.6, "As Harry Potter begins his sixth year at Hogwarts, he discovers an old book marked as ''the property of the Half-Blood Prince'' and begins to learn more about Lord Voldemort's dark past."),
        new FantasyMovie("Miss Peregrine's Home for Peculiar Children", 2016, 6.7, "When Jacob (Asa Butterfield) discovers clues to a mystery that stretches across time, he finds Miss Peregrine's Home for Peculiar Children. But the danger deepens after he gets to know the residents and learns about their special powers."),
        new FantasyMovie("Harry Potter and The Goblet of Fire", 2005, 7.7, "Harry Potter finds himself competing in a hazardous tournament between rival schools of magic, but he is distracted by recurring nightmares."),
        new FantasyMovie("Maleficent", 2014, 6.9, "A vengeful fairy is driven to curse an infant princess, only to discover that the child may be the one person who can restore peace to their troubled land."),

        //SCIFI
        new SciFiMovie("Blade Runner 2049", 2017, 8, "Young Blade Runner K's discovery of a long-buried secret leads him to track down former Blade Runner Rick Deckard, who's been missing for thirty years."),
        new SciFiMovie("Ex Machina", 2014, 7.7, "A young programmer is selected to participate in a ground-breaking experiment in synthetic intelligence by evaluating the human qualities of a highly advanced humanoid A.I."),
        new SciFiMovie("Interstellar", 2014, 8.7, "When Earth becomes uninhabitable in the future, a farmer and ex-NASA pilot, Joseph Cooper, is tasked to pilot a spacecraft, along with a team of researchers, to find a new planet for humans."),
        new SciFiMovie("Passengers", 2016, 7, "A malfunction in a sleeping pod on a spacecraft traveling to a distant colony planet wakes one passenger 90 years early."),
        new SciFiMovie("Arrival", 2016, 7.9, "A linguist works with the military to communicate with alien lifeforms after twelve mysterious spacecraft appear around the world."),
        new SciFiMovie("Dune", 2021, 8, "A noble family becomes embroiled in a war for control over the galaxy's most valuable asset while its heir becomes troubled by visions of a dark future."),

        //MYSTERY
        new MysteryMovie("Mystic River", 2003, 7.9, "The lives of three men who were childhood friends are shattered when one of them has a family tragedy."),
        new MysteryMovie("Shutter Island", 2010, 8.2, "Teddy Daniels and Chuck Aule, two US marshals, are sent to an asylum on a remote island in order to investigate the disappearance of a patient, where Teddy uncovers a shocking truth about the place."),
        new MysteryMovie("Inception", 2010, 8.8, "A thief who steals corporate secrets through the use of dream-sharing technology is given the inverse task of planting an idea into the mind of a C.E.O., but his tragic past may doom the project and his team to disaster."),
        new MysteryMovie("Rear Window", 1954, 8.5, "A photographer in a wheelchair spies on his neighbors from his Greenwich Village courtyard apartment window, and becomes convinced one of them has committed murder, despite the skepticism of his fashion-model girlfriend."),
        new MysteryMovie("Earthquake Bird", 2019, 6, "An enigmatic translator with a dark past is brought in for questioning after an ex-pat friend, who came between her and her photographer boyfriend, ends up missing and presumed dead."),
        new MysteryMovie("Triangle", 2009, 6.9, "Five friends set sail and their yacht is overturned by a strange and sudden storm. A mysterious ship arrives to rescue them, and what happens next cannot be explained.")

    };

    for (int i = 0; i < NUM_MOVIES; i++) {
        addMovie(movies[i]);
    }
}

    void showMoviesByGenre(const string& genre) const {
        for (int i = 0; i < numMovies; i++) {
            if (movies[i]->getGenre() == genre) {
                cout << movies[i]->getTitle() << " (" << movies[i]->getYear() << ") - Rating: " << movies[i]->getRating() << endl;
            }
        }
    }

    void showMoviesByYear(int year) const {
        for (int i = 0; i < numMovies; i++) {
            if (movies[i]->getYear() == year) {
                cout << movies[i]->getTitle() << " (" << movies[i]->getGenre() << ") - Rating: " << movies[i]->getRating() << endl;
            }
        }
    }

    void showMoviesByRating(float minRating) const {
        for (int i = 0; i < numMovies; i++) {
            if (movies[i]->getRating() >= minRating) {
                cout << movies[i]->getTitle() << " (" << movies[i]->getGenre() << ") - Rating: " << movies[i]->getRating() << endl;
            }
        }
    }

    void showMoviesByYearGenreRating(const string& genre, int year, float minRating) const {
    for (int i = 0; i < numMovies; i++) {
        if (movies[i]->getYear() == year && movies[i]->getRating() >= minRating && movies[i]->getGenre() == genre) {
            cout << "Title: " << movies[i]->getTitle() << endl;
            cout << "Genre: " << movies[i]->getGenre() << endl;
            cout << "Year: " << movies[i]->getYear() << endl;
            cout << "Rating: " << movies[i]->getRating() << endl;
            cout << "Description: " <<endl<<"     "<< movies[i]->getDescription() << endl;
            cout << "------------------------------------------------------------------" << endl<<endl;
        }
    }
}

};

int main() {
    MovieLibrary library;

    library.addMoviesToLibrary();
    // Asking the user for the genre, year, and minimum rating
    string genre;
    int year;
    float minRating;

    cout << "Enter a genre (Action, Drama, Comedy, Romance, Thriller, Horror, Fantasy, Sci-Fi, Mystery): ";
    cin >> genre;

    cout << "Enter a year: ";
    cin >> year;

    cout << "Enter the minimum rating: ";
    cin >> minRating;

    // Filtering movies by genre, year, or rating
    cout<<endl<<endl<<"___________________________________"<<endl<<"---------------------------------"<<endl<<"This is the Movie we found: "<<endl<<"----------------------------------"<<endl<<endl;
    library.showMoviesByYearGenreRating(genre, year, minRating);

    //ActionMovie A; Movie* M = &A; M->getGenreDescription();

    if (!genre.empty()) {
        cout <<endl<< endl<<"_______________________________"<<endl<<"-------------------------------------"<<endl<< "Other Movies in the " << genre << " genre:" << endl<<"-------------------------------"<<endl;
        library.showMoviesByGenre(genre);
    }

    if (year != 0) {
        cout <<endl<< endl <<"______________________________"<<endl<<"------------------------------------"<<endl<< "Other Movies released in " << year << ":" << endl<<"------------------------------"<<endl;
        library.showMoviesByYear(year);
    }

    cout <<endl<< endl <<"______________________________________________________"<<endl<<"-----------------------------------------------------"<<endl<< "Other Movies with a rating greater than or equal to " << minRating << ":" << endl<<"-----------------------------------------------------"<<endl;
    library.showMoviesByRating(minRating);

    return 0;
}

