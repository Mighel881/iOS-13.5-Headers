/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NSCollectionLayoutSpacing : NSObject <NSCopying> {

	double _spacing;
	BOOL _isFlexible;

}

@property (nonatomic,readonly) double spacing; 
@property (nonatomic,readonly) BOOL isFlexibleSpacing; 
@property (nonatomic,readonly) BOOL isFixedSpacing; 
+(id)defaultSpacing;
+(id)flexibleSpacing:(double)arg1 ;
+(id)fixedSpacing:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)spacing;
-(id)initWithSpacing:(double)arg1 isFlexible:(BOOL)arg2 ;
-(BOOL)isFlexibleSpacing;
-(BOOL)_hasSpacing;
-(BOOL)isFixedSpacing;
@end
