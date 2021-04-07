//
//  main.cpp
//  JammanTool
//
//  Created by Alexis ZBIK on 07/04/2021.
//

#include <iostream>
#include "AudioFileMaker.h"

int main(int argc, const char * argv[]) {
    
    double tempo = 120;
    
    double quarterLength = 60./tempo;
    
    long quartersPerBar = 4;
    long barCount = 4;
    
    long sampleRate = 44100;
    
    long sizeInSampels = barCount * quartersPerBar * quarterLength * sampleRate;
    
    makeAudioFile("phrase.wav", sizeInSampels);
    
    return 0;
}
