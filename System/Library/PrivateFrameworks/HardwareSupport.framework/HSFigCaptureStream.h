/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HardwareSupport.framework/HardwareSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HardwareSupport/HardwareSupport-Structs.h>
#import <HardwareSupport/HSCMBaseObject.h>

@class HSFigCaptureDevice;

@interface HSFigCaptureStream : HSCMBaseObject {

	HSFigCaptureDevice* _device;
	OpaqueFigCaptureStreamRef _underlyingStream;

}

@property (nonatomic,readonly) OpaqueFigCaptureStreamRef underlyingStream;              //@synthesize underlyingStream=_underlyingStream - In the implementation block
@property (nonatomic,readonly) HSFigCaptureDevice * device;                             //@synthesize device=_device - In the implementation block
+(id)statusDescription:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)valueForKey:(id)arg1 ;
-(HSFigCaptureDevice *)device;
-(BOOL)start:(id*)arg1 ;
-(BOOL)stop:(id*)arg1 ;
-(OpaqueFigCaptureStreamRef)underlyingStream;
-(BOOL)isEqualToStream:(id)arg1 ;
-(id)initWithCaptureStream:(OpaqueFigCaptureStreamRef)arg1 fromDevice:(id)arg2 ;
@end
