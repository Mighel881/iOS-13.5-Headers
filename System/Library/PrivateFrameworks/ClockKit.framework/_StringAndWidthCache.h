/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ClockKit/ClockKit-Structs.h>
@class NSMutableArray;

@interface _StringAndWidthCache : NSObject {

	NSMutableArray* _attributedStrings;
	NSMutableArray* _boxedSizes;

}
-(id)init;
-(void)addAttributedString:(id)arg1 withSize:(CGSize)arg2 ;
-(id)attributedStringAndSize:(CGSize*)arg1 forMaxWidth:(double)arg2 ;
-(id)attributedStringForIndex:(unsigned long long)arg1 ;
-(unsigned long long)attributedStringCount;
-(id)smallestAttributedStringAndSize:(CGSize*)arg1 ;
@end

