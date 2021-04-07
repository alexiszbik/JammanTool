//
//  AudioFileMaker.h
//  JammanTool
//
//  Created by Alexis ZBIK on 07/04/2021.
//

#ifndef AudioFileMaker_h
#define AudioFileMaker_h

#include "../../AudioFile/AudioFile.h"

void makeAudioFile(const char* destinationPath, long sizeInSamples) {
    
    long numChannels = 2;
    
    AudioFile<double> outputFile;
    
    outputFile.setBitDepth(16);
    outputFile.setSampleRate(44100);
    outputFile.setNumChannels((int)numChannels);
    
    AudioFile<double>::AudioBuffer buffer;
    buffer.resize (numChannels);
    
    for (int i = 0; i < numChannels; i++) {
        buffer[i].resize (sizeInSamples);
    }

    for (int i = 0; i < sizeInSamples; i++)
    {
        for (int channel = 0; channel < numChannels; channel++) {
            buffer[channel][i] = 0.0f;
        }
    }
    
    outputFile.setAudioBuffer (buffer);
    outputFile.save (destinationPath);
}



#endif /* AudioFileMaker_h */
