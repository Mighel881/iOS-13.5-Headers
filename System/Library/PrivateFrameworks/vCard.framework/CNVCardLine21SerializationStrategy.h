/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <vCard/CNVCardLineSerializationStrategyImpl.h>

@class NSArray;

@interface CNVCardLine21SerializationStrategy : CNVCardLineSerializationStrategyImpl {

	NSArray* _encodings;

}
+(id)serializerWithStorage:(id)arg1 encodings:(id)arg2 ;
-(void)serializeData:(id)arg1 ;
-(void)serializeString:(id)arg1 ;
-(id)initWithStorage:(id)arg1 ;
-(void)serializeArray:(id)arg1 withItemSeparator:(id)arg2 ;
-(void)serializeVersionPlaceholder;
-(void)serializeParameters:(id)arg1 ;
-(void)serializeGroupedLines:(id)arg1 withGroupingName:(id)arg2 ;
-(void)_addAutomagicParametersForData:(id)arg1 ;
-(id)detectedTypeOfData:(id)arg1 ;
-(id)initWithStorage:(id)arg1 encodings:(id)arg2 ;
-(id)necessaryEncodingForValue:(id)arg1 ;
@end

