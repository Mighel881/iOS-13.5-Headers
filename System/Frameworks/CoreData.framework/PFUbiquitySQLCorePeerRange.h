/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface PFUbiquitySQLCorePeerRange : NSObject {

	NSString* _owningPeerID;
	NSString* _entityName;
	NSNumber* _rangeStart;
	NSNumber* _rangeEnd;
	NSNumber* _peerStart;
	NSNumber* _peerEnd;

}

@property (nonatomic,readonly) NSString * owningPeerID;              //@synthesize owningPeerID=_owningPeerID - In the implementation block
@property (nonatomic,readonly) NSString * entityName;                //@synthesize entityName=_entityName - In the implementation block
@property (nonatomic,readonly) NSNumber * rangeStart;                //@synthesize rangeStart=_rangeStart - In the implementation block
@property (nonatomic,readonly) NSNumber * rangeEnd;                  //@synthesize rangeEnd=_rangeEnd - In the implementation block
@property (nonatomic,readonly) NSNumber * peerStart;                 //@synthesize peerStart=_peerStart - In the implementation block
@property (nonatomic,readonly) NSNumber * peerEnd;                   //@synthesize peerEnd=_peerEnd - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)entityName;
-(NSString *)owningPeerID;
-(NSNumber *)rangeStart;
-(NSNumber *)rangeEnd;
-(NSNumber *)peerStart;
-(NSNumber *)peerEnd;
-(id)initWithOwningPeerID:(id)arg1 entityName:(id)arg2 rangeStart:(id)arg3 rangeEnd:(id)arg4 peerStart:(id)arg5 peerEnd:(id)arg6 ;
@end

