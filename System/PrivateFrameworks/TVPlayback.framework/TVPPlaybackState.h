/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TVPPlaybackState : NSObject {

	NSString* _name;

}

@property (nonatomic,retain) NSString * name;              //@synthesize name=_name - In the implementation block
+(id)stopped;
+(id)playing;
+(id)paused;
+(id)loading;
+(id)scanning;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 ;
@end

