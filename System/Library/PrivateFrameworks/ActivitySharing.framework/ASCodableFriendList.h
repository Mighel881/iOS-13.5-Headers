/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActivitySharing/ActivitySharing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface ASCodableFriendList : PBCodable <NSCopying> {

	NSMutableArray* _friends;

}

@property (nonatomic,retain) NSMutableArray * friends;              //@synthesize friends=_friends - In the implementation block
+(Class)friendType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)friends;
-(void)setFriends:(NSMutableArray *)arg1 ;
-(void)addFriend:(id)arg1 ;
-(unsigned long long)friendsCount;
-(void)clearFriends;
-(id)friendAtIndex:(unsigned long long)arg1 ;
@end
