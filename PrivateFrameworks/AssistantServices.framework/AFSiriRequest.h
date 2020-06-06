/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID;

@interface AFSiriRequest : NSObject <NSSecureCoding> {

	NSString* _originatingAceID;
	NSUUID* _identifier;
	NSString* __refId;

}

@property (setter=_setRefId:,nonatomic,copy) NSString * _refId;                                    //@synthesize _refId=__refId - In the implementation block
@property (setter=_setOriginatingAceID:,nonatomic,copy) NSString * _originatingAceID;              //@synthesize originatingAceID=_originatingAceID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_identifier;
-(id)_af_analyticsContextDescription;
-(id)_initWithOriginatingAceID:(id)arg1 ;
-(NSString *)_originatingAceID;
-(BOOL)_makeAppFrontmost;
-(id)_initWithOriginatingAceID:(id)arg1 identifier:(id)arg2 ;
-(id)_descriptionWithProperties:(id)arg1 ;
-(id)requestName;
-(void)_setOriginatingAceID:(id)arg1 ;
-(NSString *)_refId;
-(void)_setRefId:(id)arg1 ;
@end
