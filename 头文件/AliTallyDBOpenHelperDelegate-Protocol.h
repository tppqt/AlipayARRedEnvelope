//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class AliTallyDBOpenHelper, FMDatabase;

@protocol AliTallyDBOpenHelperDelegate
- (_Bool)dbOpenHelper:(AliTallyDBOpenHelper *)arg1 willUpgradeDB:(FMDatabase *)arg2 fromVersion:(long long)arg3 toVersion:(long long)arg4;
- (_Bool)dbOpenHelper:(AliTallyDBOpenHelper *)arg1 willCreateDB:(FMDatabase *)arg2;
@end

