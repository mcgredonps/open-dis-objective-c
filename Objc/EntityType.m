#import "EntityType.h" 


@implementation EntityType

@synthesize entityKind;
@synthesize domain;
@synthesize country;
@synthesize category;
@synthesize subcategory;
@synthesize specific;
@synthesize extra;

-(id)init
{
  self = [super init];
  if(self)
  {
    entityKind = 0;
    domain = 0;
    country = 0;
    category = 0;
    subcategory = 0;
    specific = 0;
    extra = 0;
  } // end if(self)
  return self;
}


-(void)dealloc
{
  [super dealloc];
}

-(void) marshalUsingStream:(DataOutput*) dataStream
{
    [dataStream writeUnsignedByte:entityKind];
    [dataStream writeUnsignedByte:domain];
    [dataStream writeUnsignedShort:country];
    [dataStream writeUnsignedByte:category];
    [dataStream writeUnsignedByte:subcategory];
    [dataStream writeUnsignedByte:specific];
    [dataStream writeUnsignedByte:extra];
}

-(void) unmarshalUsingStream:(DataInput*)dataStream;
{
    entityKind = [dataStream readUnsignedByte];
    domain = [dataStream readUnsignedByte];
    country = [dataStream readUnsignedShort];
    category = [dataStream readUnsignedByte];
    subcategory = [dataStream readUnsignedByte];
    specific = [dataStream readUnsignedByte];
    extra = [dataStream readUnsignedByte];
}


-(int)getMarshalledSize
{
   int marshalSize = 0;

   marshalSize = marshalSize + 1;  // entityKind
   marshalSize = marshalSize + 1;  // domain
   marshalSize = marshalSize + 2;  // country
   marshalSize = marshalSize + 1;  // category
   marshalSize = marshalSize + 1;  // subcategory
   marshalSize = marshalSize + 1;  // specific
   marshalSize = marshalSize + 1;  // extra
    return marshalSize;
}

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
