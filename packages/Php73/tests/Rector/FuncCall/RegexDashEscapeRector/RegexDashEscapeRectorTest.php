<?php

declare(strict_types=1);

namespace Rector\Php73\Tests\Rector\FuncCall\RegexDashEscapeRector;

use Iterator;
use Rector\Php73\Rector\FuncCall\RegexDashEscapeRector;
use Rector\Testing\PHPUnit\AbstractRectorTestCase;

final class RegexDashEscapeRectorTest extends AbstractRectorTestCase
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
        return RegexDashEscapeRector::class;
    }
}
