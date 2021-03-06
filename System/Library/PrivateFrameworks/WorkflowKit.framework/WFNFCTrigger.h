/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/WFTrigger.h>

@class NSString;

@interface WFNFCTrigger : WFTrigger {

	NSString* _tagIdentifier;
	NSString* _name;

}

@property (nonatomic,copy) NSString * tagIdentifier;              //@synthesize tagIdentifier=_tagIdentifier - In the implementation block
@property (nonatomic,copy) NSString * name;                       //@synthesize name=_name - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)localizedDisplayName;
+(BOOL)isSupportedOnThisDevice;
+(BOOL)isAllowedToRunAutomatically;
+(id)localizedDisplayExplanation;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)tagIdentifier;
-(void)setTagIdentifier:(NSString *)arg1 ;
-(BOOL)hasValidConfiguration;
-(id)localizedDescriptionWithConfigurationSummary;
-(id)localizedPastTenseDescription;
@end

