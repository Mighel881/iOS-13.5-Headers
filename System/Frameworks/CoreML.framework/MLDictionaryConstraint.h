/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/MLFeatureValueConstraint.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface MLDictionaryConstraint : NSObject <MLFeatureValueConstraint, NSCopying, NSSecureCoding> {

	long long _keyType;

}

@property (nonatomic,readonly) long long keyType;              //@synthesize keyType=_keyType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)constraintWithStringKeys;
+(id)constraintWithInt64Keys;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)keyType;
-(BOOL)isAllowedValue:(id)arg1 error:(id*)arg2 ;
-(id)initWithKeyType:(long long)arg1 ;
@end

