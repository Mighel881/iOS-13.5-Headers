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

@interface HSFigCaptureSyncStreamsGroup : HSCMBaseObject {

	HSFigCaptureDevice* _device;
	OpaqueFigCaptureSynchronizedStreamsGroupRef _underlyingSyncStreamsGroup;

}

@property (nonatomic,readonly) OpaqueFigCaptureSynchronizedStreamsGroupRef underlyingSyncStreamsGroup;              //@synthesize underlyingSyncStreamsGroup=_underlyingSyncStreamsGroup - In the implementation block
@property (nonatomic,readonly) HSFigCaptureDevice * device;                                                         //@synthesize device=_device - In the implementation block
+(id)statusDescription:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)valueForKey:(id)arg1 ;
-(HSFigCaptureDevice *)device;
-(id)valueForProperty:(CFStringRef)arg1 error:(id*)arg2 ;
-(BOOL)setValue:(id)arg1 forProperty:(CFStringRef)arg2 error:(id*)arg3 ;
-(BOOL)isEqualToStreamsGroup:(id)arg1 ;
-(OpaqueFigCaptureSynchronizedStreamsGroupRef)underlyingSyncStreamsGroup;
-(id)initWithCaptureSyncStreamsGroup:(OpaqueFigCaptureSynchronizedStreamsGroupRef)arg1 fromDevice:(id)arg2 ;
-(id)streams:(id*)arg1 ;
@end
