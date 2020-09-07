/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNSmartPropertyFetcher.h>

@class NSSet, NSDictionary;

@interface CNContactFormatterSmartFetcher : CNSmartPropertyFetcher {

	BOOL _ignoresNickname;
	BOOL _ignoresOrganization;
	NSSet* _mandatoryNameProperties;
	NSDictionary* _fallBackNamePropertyByNameKey;

}

@property (nonatomic,copy) NSSet * mandatoryNameProperties;                           //@synthesize mandatoryNameProperties=_mandatoryNameProperties - In the implementation block
@property (nonatomic,copy) NSDictionary * fallBackNamePropertyByNameKey;              //@synthesize fallBackNamePropertyByNameKey=_fallBackNamePropertyByNameKey - In the implementation block
@property (assign,nonatomic) BOOL ignoresNickname;                                    //@synthesize ignoresNickname=_ignoresNickname - In the implementation block
@property (assign,nonatomic) BOOL ignoresOrganization;                                //@synthesize ignoresOrganization=_ignoresOrganization - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_cn_requiredKeys;
-(id)_cn_optionalKeys;
-(void)_cn_executeGetterForRepresentedKeys:(/*^block*/id)arg1 ;
-(id)_cn_ignorableKeys;
-(BOOL)ignoresNickname;
-(void)setIgnoresNickname:(BOOL)arg1 ;
-(BOOL)ignoresOrganization;
-(void)setIgnoresOrganization:(BOOL)arg1 ;
-(void)setupNameKeys;
-(NSSet *)mandatoryNameProperties;
-(void)setMandatoryNameProperties:(NSSet *)arg1 ;
-(NSDictionary *)fallBackNamePropertyByNameKey;
-(void)setFallBackNamePropertyByNameKey:(NSDictionary *)arg1 ;
@end
