//
//  Music.hpp
//  DataStructures
//
//  Created by Cody Henrichsen on 1/29/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Music_hpp
#define Music_hpp
#include <iostream>
#include <string>
#include <cmath>
#include <sstream> //String as stream
class Music
{
private:
    double artist_hotttnesss;
    std::string artist_id;
    std::string artist_name;
    std::string artist_mbtags;
    double artist_mbtags_count;
    double bars_confidence;
    double bars_start;
    double beats_confidence;
    double beats_start;
    double duration;
    double end_of_fade_in;
    double familiarity;
    int key;
    double key_confidence;
    double latitude;
    std::string location;
    double longitude;
    double loudness;
    int mode;
    double mode_confidence;
    int release_id;
    std::string release_name;
    std::string similar;
    double song_hotttnesss;
    std::string song_id;
    double start_of_fade_out;
    double tatums_confidence;
    double tatums_start;
    double tempo;
    std::string terms;
    double terms_freq;
    int time_signature;
    double time_signature_confidence;
    std::string title;
    int year;
    
public:
    Music();
    Music(std::string data);
    //Getters
    double getArtist_hotttnesss() const;
    std::string getArtist_id() const;
    std::string getArtist_name() const;
    std::string getArtist_mbtags() const;
    double getArtist_mbtags_count() const;
    double getBars_confidence() const;
    double getBars_start() const;
    double getBeats_confidence() const;
    double getBeats_start() const;
    double getDuration() const;
    double getEnd_of_fade_in() const;
    double getFamiliarity() const;
    int getKey() const;
    double getKey_confidence() const;
    double getLatitude() const;
    std::string getLocation() const;
    double getLongitude() const;
    double getLoudness() const;
    int getMode() const;
    double getMode_confidence() const;
    int getRelease_id() const;
    std::string getRelease_name() const;
    std::string getSimilar() const;
    double getSong_hotttnesss() const;
    std::string getSong_id() const;
    double getStart_of_fade_out() const;
    double getTatums_confidence() const;
    double getTatums_start() const;
    double getTempo() const;
    std::string getTerms() const;
    double getTerms_freq() const;
    int getTime_signature() const;
    double getTime_signature_confidence() const;
    std::string getTitle() const;
    int getYear() const;
    
    bool operator == (const Music & compared);
    bool operator < (const Music & other);
    bool operator > (const Music & other);
    
    friend std::ostream & operator << (std::ostream & outputStream, const Music & outputData);
};



#endif /* Music_hpp */
