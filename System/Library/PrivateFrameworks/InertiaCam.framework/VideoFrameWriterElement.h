/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/InertiaCam.framework/InertiaCam
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <InertiaCam/InertiaCam-Structs.h>
@interface VideoFrameWriterElement : NSObject {

	CVBufferRef _pixelBuffer;
	long long _frameNumber;
	SCD_Struct_Vi2 _frameTime;

}

@property (assign,nonatomic) CVBufferRef pixelBuffer;               //@synthesize pixelBuffer=_pixelBuffer - In the implementation block
@property (assign,nonatomic) SCD_Struct_Vi2 frameTime;              //@synthesize frameTime=_frameTime - In the implementation block
@property (assign,nonatomic) long long frameNumber;                 //@synthesize frameNumber=_frameNumber - In the implementation block
-(void)dealloc;
-(CVBufferRef)pixelBuffer;
-(void)setPixelBuffer:(CVBufferRef)arg1 ;
-(long long)frameNumber;
-(void)setFrameNumber:(long long)arg1 ;
-(SCD_Struct_Vi2)frameTime;
-(void)DeallocPixBuffer;
-(void)setFrameTime:(SCD_Struct_Vi2)arg1 ;
@end

