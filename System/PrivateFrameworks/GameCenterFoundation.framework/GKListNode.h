/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GKListNode : NSObject {

	id _value;
	GKListNode* _prevNode;
	GKListNode* _nextNode;

}

@property (assign,nonatomic) GKListNode * nextNode;              //@synthesize nextNode=_nextNode - In the implementation block
@property (assign,nonatomic) GKListNode * prevNode;              //@synthesize prevNode=_prevNode - In the implementation block
@property (nonatomic,retain) id value;                           //@synthesize value=_value - In the implementation block
-(void)dealloc;
-(id)description;
-(id)value;
-(void)setValue:(id)arg1 ;
-(id)initWithValue:(id)arg1 ;
-(GKListNode *)nextNode;
-(void)setNextNode:(GKListNode *)arg1 ;
-(GKListNode *)prevNode;
-(void)setPrevNode:(GKListNode *)arg1 ;
@end
