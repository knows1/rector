<?php

namespace Rector\Tests\Rector\Class_\AddInterfaceByTraitRector\Fixture;

use Rector\Tests\Rector\Class_\AddInterfaceByTraitRector\Source\SomeTrait;

class SomeClass
{
    use SomeTrait;
}

?>
-----
<?php

namespace Rector\Tests\Rector\Class_\AddInterfaceByTraitRector\Fixture;

use Rector\Tests\Rector\Class_\AddInterfaceByTraitRector\Source\SomeTrait;

class SomeClass implements \Rector\Tests\Rector\Class_\AddInterfaceByTraitRector\Source\SomeInterface
{
    use SomeTrait;
}

?>
