<?php

declare(strict_types=1);

namespace Rector\Php72\Tests\Rector\FuncCall\ParseStrWithResultArgumentRector;

use Iterator;
use Rector\Php72\Rector\FuncCall\ParseStrWithResultArgumentRector;
use Rector\Testing\PHPUnit\AbstractRectorTestCase;

final class ParseStrWithResultArgumentRectorTest extends AbstractRectorTestCase
{
    /**
     * @dataProvider provideDataForTest()
     */
    public function test(string $file): void
    {
        $this->doTestFile($file);
    }

    public function provideDataForTest(): Iterator
    {
        return $this->yieldFilesFromDirectory(__DIR__ . '/Fixture');
    }

    protected function getRectorClass(): string
    {
        return ParseStrWithResultArgumentRector::class;
    }
}
