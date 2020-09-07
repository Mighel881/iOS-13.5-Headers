/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:55:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/CoreAccessories/PlugIns/Features/NowPlaying-iOS.feature/NowPlaying-iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, ACCMemUsageStatInfo, NSMutableDictionary;

@interface ACCMemUsageStat : NSObject {

	NSString* _name;
	ACCMemUsageStatInfo* _statInfo;
	NSMutableDictionary* _markList;

}

@property (nonatomic,readonly) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) ACCMemUsageStatInfo * statInfo;              //@synthesize statInfo=_statInfo - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * markList;              //@synthesize markList=_markList - In the implementation block
-(id)init;
-(id)description;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(ACCMemUsageStatInfo *)statInfo;
-(BOOL)update;
-(void)mark:(id)arg1 ;
-(id)getMark:(id)arg1 ;
-(double)timeIntervalSinceLastUpdate;
-(void)removeMark:(id)arg1 ;
-(NSMutableDictionary *)markList;
-(double)timeIntervalSinceStart;
-(double)timeIntervalSinceMark:(id)arg1 ;
@end
