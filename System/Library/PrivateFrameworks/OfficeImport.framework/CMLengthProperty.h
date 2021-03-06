/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/CMProperty.h>

@interface CMLengthProperty : CMProperty {

	double value;
	int unitType;

}
+(double)convertToPoints:(double)arg1 unit:(int)arg2 ;
+(id)cssStringValue:(double)arg1 unit:(int)arg2 ;
-(int)intValue;
-(id)description;
-(double)value;
-(int)compareValue:(id)arg1 ;
-(id)initWithNumber:(double)arg1 ;
-(int)unitType;
-(id)initWithNumber:(double)arg1 unit:(int)arg2 ;
-(id)cssStringForName:(id)arg1 ;
-(id)cssString;
-(void)addNumber:(double)arg1 unit:(int)arg2 ;
@end

