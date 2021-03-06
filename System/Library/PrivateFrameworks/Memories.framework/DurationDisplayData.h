/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface DurationDisplayData : NSObject {

	NSString* _localizedName;
	double _duration;

}

@property (retain) NSString * localizedName;              //@synthesize localizedName=_localizedName - In the implementation block
@property (assign) double duration;                       //@synthesize duration=_duration - In the implementation block
+(id)pairWithDuration:(double)arg1 ;
-(NSString *)localizedName;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setLocalizedName:(NSString *)arg1 ;
@end

