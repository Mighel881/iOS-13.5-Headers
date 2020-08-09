/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface MTIDInfo : NSObject {

	NSString* _ID;
	NSDate* _expirationDate;
	NSString* _idNamespace;

}

@property (nonatomic,retain) NSString * ID;                        //@synthesize ID=_ID - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;              //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,retain) NSString * idNamespace;               //@synthesize idNamespace=_idNamespace - In the implementation block
-(id)description;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSString *)ID;
-(void)setID:(NSString *)arg1 ;
-(id)initWithNamespace:(id)arg1 expiration:(id)arg2 ID:(id)arg3 ;
-(void)setIdNamespace:(NSString *)arg1 ;
-(NSString *)idNamespace;
@end
