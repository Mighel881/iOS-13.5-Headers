/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <Foundation/NSMutableCharacterSet.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface __NSCFCharacterSet : NSMutableCharacterSet <NSSecureCoding>
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(unsigned long long)retainCount;
-(BOOL)isEqual:(id)arg1 ;
-(id)retain;
-(oneway void)release;
-(unsigned long long)hash;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)invertedSet;
-(BOOL)longCharacterIsMember:(unsigned)arg1 ;
-(BOOL)hasMemberInPlane:(unsigned char)arg1 ;
-(void)addCharactersInRange:(NSRange)arg1 ;
-(void)removeCharactersInRange:(NSRange)arg1 ;
-(void)addCharactersInString:(id)arg1 ;
-(void)removeCharactersInString:(id)arg1 ;
-(void)formUnionWithCharacterSet:(id)arg1 ;
-(void)formIntersectionWithCharacterSet:(id)arg1 ;
-(void)invert;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)classForCoder;
-(id)bitmapRepresentation;
-(BOOL)characterIsMember:(unsigned short)arg1 ;
-(BOOL)isSupersetOfSet:(id)arg1 ;
-(void)makeCharacterSetCompact;
-(void)makeCharacterSetFast;
@end
