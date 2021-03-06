/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/libAudioDSP.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CLMClickEvent : NSObject <NSSecureCoding> {

	unsigned long long _absoluteTime;
	long long _eventType;

}

@property (assign) unsigned long long absoluteTime;              //@synthesize absoluteTime=_absoluteTime - In the implementation block
@property (assign) long long eventType;                          //@synthesize eventType=_eventType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)eventType;
-(unsigned long long)absoluteTime;
-(void)setAbsoluteTime:(unsigned long long)arg1 ;
-(void)setEventType:(long long)arg1 ;
@end

