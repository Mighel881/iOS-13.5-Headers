/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MPSCore/MPSCore-Structs.h>
@interface MPSVector : NSObject {

	MPSDevice* _device;
	unsigned long long _length;
	unsigned long long _vectors;
	unsigned long long _vectorBytes;
	unsigned long long _offset;
	unsigned _dataType;
	MPSAutoBuffer* _buffer;

}

@property (nonatomic,retain,readonly) id<MTLDevice> device; 
@property (nonatomic,readonly) unsigned long long length;                   //@synthesize length=_length - In the implementation block
@property (nonatomic,readonly) unsigned long long vectors;                  //@synthesize vectors=_vectors - In the implementation block
@property (nonatomic,readonly) unsigned dataType;                           //@synthesize dataType=_dataType - In the implementation block
@property (nonatomic,readonly) unsigned long long vectorBytes;              //@synthesize vectorBytes=_vectorBytes - In the implementation block
@property (nonatomic,readonly) unsigned long long offset;                   //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) id<MTLBuffer> data; 
-(id)init;
-(unsigned long long)length;
-(id<MTLBuffer>)data;
-(id<MTLDevice>)device;
-(unsigned)dataType;
-(unsigned long long)offset;
-(void)synchronizeOnCommandBuffer:(id)arg1 ;
-(id)initWithBuffer:(id)arg1 descriptor:(id)arg2 ;
-(id)initWithDevice:(id)arg1 descriptor:(id)arg2 ;
-(unsigned long long)vectors;
-(unsigned long long)resourceSize;
-(unsigned long long)vectorBytes;
-(id)initPrivateWithDescriptor:(id)arg1 device:(MPSDevice*)arg2 ;
-(id)initWithBuffer:(id)arg1 offset:(unsigned long long)arg2 descriptor:(id)arg3 ;
-(id)initWithBuffer:(id)arg1 length:(unsigned long long)arg2 dataType:(unsigned)arg3 ;
@end
