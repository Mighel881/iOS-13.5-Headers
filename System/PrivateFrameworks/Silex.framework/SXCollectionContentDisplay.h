/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SXCollectionContentDisplay <SXContentDisplay>
@property (nonatomic,readonly) SXConvertibleValue minimumWidth; 
@property (nonatomic,readonly) SXConvertibleValue maximumWidth; 
@property (nonatomic,readonly) SXConvertibleValue gutter; 
@property (nonatomic,readonly) SXConvertibleValue rowSpacing; 
@property (nonatomic,readonly) unsigned long long alignment; 
@property (nonatomic,readonly) unsigned long long distribution; 
@property (nonatomic,readonly) unsigned long long widows; 
@property (nonatomic,readonly) BOOL variableSizing; 
@required
-(unsigned long long)alignment;
-(unsigned long long)distribution;
-(SXConvertibleValue)maximumWidth;
-(SXConvertibleValue)minimumWidth;
-(SXConvertibleValue)rowSpacing;
-(unsigned long long)widows;
-(SXConvertibleValue)gutter;
-(BOOL)variableSizing;

@end
