#import <Foundation/Foundation.h>
#import "DataInput.h"
#import "DataOutput.h"


// The Angle Deception attribute record may be used to communicate discrete values that are associated with angle deception jamming that cannot be referenced to an emitter mode. The values provided in the record records (provided in the associated Electromagnetic Emission PDU). (The victim radar beams are those that are targeted by the jammer.) Section 6.2.12.2

// Copyright (c) 2007-2009, MOVES Institute, Naval Postgraduate School. All rights reserved. 
//
// @author DMcG

@interface  AngleDeception: NSObject
{
  unsigned int recordType; 

  unsigned short recordLength; 

  unsigned short padding; 

  unsigned char emitterNumber; 

  unsigned char beamNumber; 

  unsigned char stateIndicator; 

  unsigned int padding2; 

  float azimuthOffset; 

  float azimuthWidth; 

  float azimuthPullRate; 

  float azimuthPullAcceleration; 

  float elevationOffset; 

  float elevationWidth; 

  float elevationPullRate; 

  float elevationPullAcceleration; 

  unsigned int padding3; 

}

@property(readwrite, assign) unsigned int recordType; 
@property(readwrite, assign) unsigned short recordLength; 
@property(readwrite, assign) unsigned short padding; 
@property(readwrite, assign) unsigned char emitterNumber; 
@property(readwrite, assign) unsigned char beamNumber; 
@property(readwrite, assign) unsigned char stateIndicator; 
@property(readwrite, assign) unsigned int padding2; 
@property(readwrite, assign) float azimuthOffset; 
@property(readwrite, assign) float azimuthWidth; 
@property(readwrite, assign) float azimuthPullRate; 
@property(readwrite, assign) float azimuthPullAcceleration; 
@property(readwrite, assign) float elevationOffset; 
@property(readwrite, assign) float elevationWidth; 
@property(readwrite, assign) float elevationPullRate; 
@property(readwrite, assign) float elevationPullAcceleration; 
@property(readwrite, assign) unsigned int padding3; 

-(id)init; // Initializer
-(void)dealloc;
-(void)marshalUsingStream:(DataOutput*) dataStream;
-(void)unmarshalUsingStream:(DataInput*) dataStream;

-(int)getMarshalledSize;

@end

// Copyright (c) 1995-2009 held by the author(s).  All rights reserved.
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
//  are met:
// 
//  * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
// * Redistributions in binary form must reproduce the above copyright
// notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
// * Neither the names of the Naval Postgraduate School (NPS)
//  Modeling Virtual Environments and Simulation (MOVES) Institute
// (http://www.nps.edu and http://www.MovesInstitute.org)
// nor the names of its contributors may be used to endorse or
//  promote products derived from this software without specific
// prior written permission.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// AS IS AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
// FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
// COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
// BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
// LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
// CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
// LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
// ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.
