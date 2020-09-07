/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PKFeatureApplicationDeclineDetails : NSObject <NSSecureCoding, NSCopying> {

	NSString* _declinedTermsIdentifier;
	NSString* _pathTermsIdentifier;
	NSString* _pathIdentifier;

}

@property (nonatomic,copy) NSString * declinedTermsIdentifier;              //@synthesize declinedTermsIdentifier=_declinedTermsIdentifier - In the implementation block
@property (nonatomic,copy) NSString * pathTermsIdentifier;                  //@synthesize pathTermsIdentifier=_pathTermsIdentifier - In the implementation block
@property (nonatomic,copy) NSString * pathIdentifier;                       //@synthesize pathIdentifier=_pathIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)pathTermsIdentifier;
-(void)setPathTermsIdentifier:(NSString *)arg1 ;
-(NSString *)pathIdentifier;
-(void)setPathIdentifier:(NSString *)arg1 ;
-(NSString *)declinedTermsIdentifier;
-(void)setDeclinedTermsIdentifier:(NSString *)arg1 ;
@end
