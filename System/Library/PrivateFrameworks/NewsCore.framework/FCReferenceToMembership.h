/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FCReferenceToMembership : NSObject {

	NSString* _identifier;
	NSString* _membershipID;

}

@property (nonatomic,readonly) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * membershipID;              //@synthesize membershipID=_membershipID - In the implementation block
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithRecord:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 dictionaryRepresentation:(id)arg2 ;
-(NSString *)membershipID;
@end

