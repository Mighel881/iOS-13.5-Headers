/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NSValue : NSObject <NSCopying, NSSecureCoding>

@property (readonly) const char* objCType; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)valueWithRange:(NSRange)arg1 ;
+(id)valueWithPoint:(CGPoint)arg1 ;
+(id)valueWithRect:(CGRect)arg1 ;
+(id)valueWithSize:(CGSize)arg1 ;
+(id)valueWithBytes:(const void*)arg1 objCType:(const char*)arg2 ;
+(id)value:(const void*)arg1 withObjCType:(const char*)arg2 ;
+(id)valueWithNonretainedObject:(id)arg1 ;
+(id)valueWithWeakObject:(id)arg1 ;
+(id)valueWithPointer:(const void*)arg1 ;
+(id)valueWithEdgeInsets:(NSEdgeInsets)arg1 ;
-(id)init;
-(const char*)objCType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)classForCoder;
-(void)getValue:(void*)arg1 ;
-(BOOL)isNSValue__;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(NSRange)rangeValue;
-(CGPoint)pointValue;
-(CGRect)rectValue;
-(CGSize)sizeValue;
-(void)getValue:(void*)arg1 size:(unsigned long long)arg2 ;
-(BOOL)_matchType:(const char*)arg1 size:(unsigned long long)arg2 strict:(BOOL)arg3 ;
-(BOOL)isEqualToValue:(id)arg1 ;
-(id)nonretainedObjectValue;
-(id)weakObjectValue;
-(BOOL)_matchType:(const char*)arg1 size:(unsigned long long)arg2 ;
-(void*)pointerValue;
-(NSEdgeInsets)edgeInsetsValue;
-(id)initWithBytes:(const void*)arg1 objCType:(const char*)arg2 ;
@end
