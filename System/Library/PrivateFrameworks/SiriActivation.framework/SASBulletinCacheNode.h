/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AFBulletin;

@interface SASBulletinCacheNode : NSObject {

	AFBulletin* _bulletin;
	SASBulletinCacheNode* _previousNode;
	SASBulletinCacheNode* _nextNode;

}

@property (nonatomic,retain) AFBulletin * bulletin;                            //@synthesize bulletin=_bulletin - In the implementation block
@property (nonatomic,retain) SASBulletinCacheNode * previousNode;              //@synthesize previousNode=_previousNode - In the implementation block
@property (nonatomic,retain) SASBulletinCacheNode * nextNode;                  //@synthesize nextNode=_nextNode - In the implementation block
-(SASBulletinCacheNode *)nextNode;
-(SASBulletinCacheNode *)previousNode;
-(void)setBulletin:(AFBulletin *)arg1 ;
-(AFBulletin *)bulletin;
-(void)setPreviousNode:(SASBulletinCacheNode *)arg1 ;
-(void)setNextNode:(SASBulletinCacheNode *)arg1 ;
@end

