/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarFoundation/CalendarFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary;

@interface CalDefaultDictionary : NSObject <NSCopying> {

	Class _defaultClass;
	NSMutableDictionary* _dict;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setDictionary:(id)arg1 ;
-(id)keys;
-(id)deepCopy;
-(id)initWithDefaultClass:(Class)arg1 ;
-(id)_copyWithZone:(NSZone*)arg1 isDeepCopy:(BOOL)arg2 ;
-(id)_mutableCopyOfFinalDictionaryWithZone:(NSZone*)arg1 isDeepCopy:(BOOL)arg2 ;
-(id)finalDictionary;
-(id)existingObjectForKey:(id)arg1 ;
@end

